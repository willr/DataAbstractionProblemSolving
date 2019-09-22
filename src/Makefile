

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


clean:
	rm -f *.o *.so $(PROGRAM)

test: 


