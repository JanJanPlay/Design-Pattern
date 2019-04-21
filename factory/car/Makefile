#Author: Jan
#Date: 2019.04.21

CC = g++
CFLAGS = -O2
OBJECTS = vwcar.o bmwcar.o

all:${OBJECTS}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f *.o

