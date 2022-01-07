CC = g++
CFLAGS = -lwiringPi

SRCS = ControlServo.cpp

NAME = ControlServo

$(NAME):
	$(CC) -o $(NAME) $(SRCS) $(CFLAGS)

all: $(NAME)

fclean:
	rm -r $(NAME)

re: fclean all
