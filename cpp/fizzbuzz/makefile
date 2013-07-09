
CC      = gcc
CXX     = g++
OBJS    = main.o fizzbuzz.o
CCFLAGS = -std=c++11

# 生成規則部
fizzbuzz.out: $(OBJS)
	$(CXX) -o $@ $(OBJS)

.c.o:
	$(CC) $(CCFLAGS) -c $<

.cpp.o:
	$(CXX) $(CCFLAGS) -c $<

run:
	./fizzbuzz.out

clean:
	rm fizzbuzz.out
	rm *.o
