CXX = g++
#CXXFLAGS = -Wall -g
CXXFLAGS = -Wall -Wextra -std=c++17 -ggdb
EXECUTABLE  := main


all: $(EXECUTABLE)

run: 	
	#clear
	@echo "🚀 Executing..."
	./$(EXECUTABLE)

main: main.o binary_tree.o
	@echo "🚧 Building..."
	$(CXX) $(CXXFLAGS) -o main main.o binary_tree.o

main.o: main.cpp binary_tree.h
	$(CXX) $(CXXFLAGS) -c main.cpp

binary_tree.o: binary_tree.cpp binary_tree.h
	$(CXX) $(CXXFLAGS) -c binary_tree.cpp binary_tree.h

clean:
	@echo "🧹 Clearing..."
	rm *.o main
