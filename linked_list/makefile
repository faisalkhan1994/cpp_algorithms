CXX = g++
#CXXFLAGS = -Wall -g
CXXFLAGS = -Wall -Wextra -std=c++17 -ggdb
EXECUTABLE  := main


all: $(EXECUTABLE)

run: 	
	#clear
	@echo "🚀 Executing..."
	./$(EXECUTABLE)

main: main.o linked_list.o
	@echo "🚧 Building..."
	$(CXX) $(CXXFLAGS) -o main main.o linked_list.o

main.o: main.cpp linked_list.h
	$(CXX) $(CXXFLAGS) -c main.cpp

linked_list.o: linked_list.cpp linked_list.h
	$(CXX) $(CXXFLAGS) -c linked_list.cpp linked_list.h

clean:
	@echo "🧹 Clearing..."
	rm *.o main
