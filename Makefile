CXX = g++
CXXFLAGS = -std=c++17 -g -Wall

SRC = '.'
EXEC = main

OBJ =  main.cpp leetcode.cpp

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(SRC)/$@ $(OBJ)


clean:
	rm -rf $(EXEC)

rebuild: clean all