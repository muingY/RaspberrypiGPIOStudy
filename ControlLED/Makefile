CC = g++
CFLAGS = -lwiringPi

SRCS = ControlLED.cpp

NAME = ControlLED

$(NAME):
	$(CC) -o $(NAME) $(SRCS) $(CFLAGS)

all: $(NAME)

fclean:
	rm -r $(NAME)

re: fclean all
