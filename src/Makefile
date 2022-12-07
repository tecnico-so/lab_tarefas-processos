# Makefile
#
# It uses implicit rules to compile .c files using the
# values assigned to macros CC and CFLAGS
#

CC = gcc
CFLAGS = -g -Wall -std=c17
TARGETS = thread

# We need to pass into a library flag -lpthread. 
# -l<name> tries to find a lib<name>.so (a shared object, or, in other words, a compiled library) 
# file and link it in the executable
#
# The variable LDFLAGS gets used the implicit rules
#LDFLAGS = -pthread

# Since the location of the pthread library varies between systems, a different flag "-pthread" exists, that takes this into consideration.
# It is equivalent to setting -lpthread and other flags related to the include paths for header files and shared libraries.
CFLAGS += -pthread # ensures pthread.h is in include path (-Ipath/to/pthread.hfolder)
LDFLAGS += -pthread # ensures pthread.so is in library path (-Lpath/to/pthread.sofolder) and links to it (-lpthread)

.PHONY: all clean

all: $(TARGETS)

clean:
	rm -f *.o $(TARGETS) 
