CFLAGC = -Wall -Wextra -Werror
LIBFT_DIR = ./libft
LIBFT		= $(LIBFT_DIR)/libft.a
CC = gcc
c_src = minitalk_utils.c
c_obj=$(c_src:.c=.o)
SERVER = server 
CLIENT = client

all: $(SERVER) $(CLIENT)

$(SERVER): $(c_obj) $(LIBFT)
	$(CC) $(CFLAGS) server.c $(c_obj) $(LIBFT) -o $(SERVER)

$(CLIENT): $(c_obj) $(LIBFT)
	$(CC) $(CFLAGS) client.c $(c_obj) $(LIBFT) -o $(CLIENT)

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

$(LIBFT):
	make all -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(c_obj)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(CLIENT) $(SERVER)

re: fclean all

.PHONY:	all re clean fclean