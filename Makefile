
# COMMANDS
CC =						gcc
RM = 						rm -rf

# EXECUTABLE
NAME =						minitalk
SRV =						server
CLT = 						client
SRV_BONUS =					server_bonus
CLT_BONUS =					client_bonus

# FLAGS
CFLAGS = 					-Wall -Wextra -Werror
LFLAGS =					-lftprintf -L ./ft_printf/ 
LFLAGS +=					-lft -L ./libft/

ifeq ($(DEBUG), 1)				
							CFLAGS += -g3 -fsanitize=address
							LFLAGS += -fsanitize=address
endif

# DIRECTORY
LIBFT_DIR =					./libft/
PRINTF_DIR =				./ft_printf/

# LIBRARY
FT_PRINTF =					libftprintf.a
LIBFT =						libft.a

# SOURCES
SRC_CLT =					client.c
SRC_SRV =					server.c
SRC_CLT_BONUS =				client_bonus.c
SRC_SRV_BONUS =				server_bonus.c

# OBJECTS
OBJ_CLT =					$(SRC_CLT:.c=.o)
OBJ_SRV =					$(SRC_SRV:.c=.o)
OBJ_CLT_BONUS =				$(SRC_CLT_BONUS:.c=.o)
OBJ_SRV_BONUS =				$(SRC_SRV_BONUS:.c=.o)

# RULES
all:						$(NAME)

${NAME}:					$(CLT) $(SRV)

bonus:						$(CLT_BONUS) $(SRV_BONUS)

$(PRINTF_DIR)$(FT_PRINTF):	
							make $(FT_PRINTF) -C $(PRINTF_DIR)

$(LIBFT_DIR)$(LIBFT):	
							make $(LIBFT) -C $(LIBFT_DIR)

%.o:						%.c
							$(CC) $(CFLAGS) -c $< -o $@

$(SRV):						$(OBJ_SRV) $(PRINTF_DIR)$(FT_PRINTF) $(LIBFT_DIR)$(LIBFT)
							$(CC) $(LFLAGS) $(OBJ_SRV) -o $@

$(CLT):						$(OBJ_CLT) $(PRINTF_DIR)$(FT_PRINTF) $(LIBFT_DIR)$(LIBFT)
							$(CC) $(LFLAGS) $(OBJ_CLT) -o $@

$(SRV_BONUS):				$(OBJ_SRV_BONUS) $(PRINTF_DIR)$(FT_PRINTF) $(LIBFT_DIR)$(LIBFT)
							$(CC) $(LFLAGS) $(OBJ_SRV_BONUS) -o $@

$(CLT_BONUS):				$(OBJ_CLT_BONUS) $(PRINTF_DIR)$(FT_PRINTF) $(LIBFT_DIR)$(LIBFT)
							$(CC) $(LFLAGS) $(OBJ_CLT_BONUS) -o $@

clean:						
							$(RM) $(OBJ_SRV) $(OBJ_CLT) $(SRV) $(CLT) $(OBJ_SRV_BONUS) $(OBJ_CLT_BONUS) $(SRV_BONUS) $(CLT_BONUS)

fclean:						clean
							make fclean -C $(LIBFT_DIR)
							make fclean -C $(PRINTF_DIR)

re:							clean all

fre:						fclean all 

.PHONY:						all bonus clean fclean re fre
