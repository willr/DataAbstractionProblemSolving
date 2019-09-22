

.PHONY: all clean test

PROGRAM = 
CXX = -c++
CXXFLAGS := -g -DDEBUG -pedantic-errors -Wall -Wextra -Werror -std=c++14
LDFLAGS  := -L/usr/lib -lstdc++ -lm
LDEXTRAFLAGS ?=
INCLUDE = -I/usr/include -I.
OBJS = 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ -c $<


# corewriter.o: corewriter.c
#	# gcc -c -Wall -g -o $@ -I/usr/include/glib-2.0/ -I/usr/lib/x86_64-linux-gnu/glib-2.0/include/ $<
#	gcc ${OPTIONS} -o $@ ${INCLUDES} -c $<

#corewriter: corewriter.o fileio.o logger.o node_list.o
#	gcc $(LDEXTRAFLAGS) ${OPTIONS} -o $@ $^ -L/usr/lib/x86_64-linux-gnu/

clean:
	rm -f *.o *.so $(PROGRAM)

test: 


