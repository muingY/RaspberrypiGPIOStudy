CC = g++
CFLAGS = -lwiringPi

SRCS = UltrasonicSensor.cpp

NAME = DistanceMeasurement

$(NAME):
	$(CC) -o $(NAME) $(SRCS) $(CFLAGS)

all: $(NAME)

fclean:
	rm -r $(NAME)

re: fclean all
