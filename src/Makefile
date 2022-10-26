# Makefile
#
# It uses implicit rules to compile .c files using the
# values assigned to macros CC and CFLAGS
#

CC = gcc
CFLAGS = -g -Wall -std=c17

thread: thread.o
	gcc -o thread thread.o -lpthread

clean:
	rm -f *.o thread 
