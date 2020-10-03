CXX		= g++
CXXFLAGS	= -Wall -Wextra -std=c++17 -ggdb

main:	main.o codes.o
	$(CXX) $(CXXFLAGS) -o main main.o codes.o

main.o: main.cpp codes.h
	$(CXX) $(CXXFLAGS) -c main.cpp

codes.o: codes.cpp codes.h
	$(CXX) $(CXXFLAGS) -c codes.cpp codes.h

clean:
	rm *.o main
	
