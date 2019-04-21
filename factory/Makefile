#Author: Jan
#Date: 2019.04.21

CC = g++
CFLAGS = -g -O2
PROG = submakefile auto
VPATH = app:key:car
OBJECTS = app/main.o key/bmwkey.o key/vwkey.o car/bmwcar.o car/vwcar.o
#SUBDIR := app key
#OBJECTS := $(foreach dir,$(SUBDIR),$(wildcard ${dir}/*.o))

all: ${PROG}

submakefile:
	${MAKE} -C app
	${MAKE} -C key
	${MAKE} -C car

auto: ${OBJECTS}
	${CC} ${CFLAGS} -o $@ $^

clean:
	rm -f ${PROG} 
	cd app && make clean
	cd key && make clean
	cd car && make clean
