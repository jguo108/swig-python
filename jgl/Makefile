# Makefile template for shared library

CXX= g++ # C++ compiler
CFLAGS = -fPIC -Wall -Wextra -O2 -g # C flags
LDFLAGS = -shared  # linking flags
RM = rm -f  # rm command
TARGET_LIB = libjgl.so # target lib

SRCS = jgl_greeter.cpp # source files
OBJS = $(SRCS:.cpp=.o)

.PHONY: all
	all: ${TARGET_LIB}

$(TARGET_LIB): $(OBJS)
	    $(CXX) ${LDFLAGS} -o $@ $^

$(SRCS:.cpp=.d):%.d:%.cpp
	    $(CXX) $(CFLAGS) -MM $< >$@

include $(SRCS:.cpp=.d)

clean:
	    -${RM} ${TARGET_LIB} ${OBJS} $(SRCS:.cpp=.d)
