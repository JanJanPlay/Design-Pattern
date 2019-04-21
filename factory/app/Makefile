#Author: Jan
#Date: 2019.04.21

CC = g++
CFLAGS = -O2
#链接相关头文件
LIB = -I../key -I../car -I../simplefactory -I../factorymethod -I../abstractfactory

PROG := main.o			#指定obj目录下的main.o 

all:${PROG}				#输入make 会默认执行这一行

%.o: %.cpp				#本目录下的所有.o 依赖本目录下相应的.c
	${CC} ${CFLAGS} -c $< -o $@ ${LIB}

clean:
	rm -f *.o
