CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Wpedantic

SRC = vectorAdd.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = program

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(EXEC)
