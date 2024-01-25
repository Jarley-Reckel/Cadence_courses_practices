CXX := g++
LIBS := -lm
SRC := src
OBJ := obj
INC := include
BIN := bin

CFLAGS := -std=c++17 -Wall

WRITE_SRC := $(SRC)/write_in_file.cpp
READ_SRC := $(SRC)/read_from_file.cpp
CALCULATE_SRC := $(SRC)/calculate_age.cpp

HEADERS := $(INC)/personal_information.hpp $(INC)/time.hpp

WRITE_OBJ := $(OBJ)/write_in_file.o
READ_OBJ := $(OBJ)/read_from_file.o
CALCULATE_OBJ := $(OBJ)/calculate_age.o

all: write read calculate

write: $(BIN)/write
read: $(BIN)/read
calculate: $(BIN)/calculate


$(BIN)/write: $(WRITE_OBJ)
	$(CXX) $(CFLAGS) -o $@ $^

$(BIN)/read: $(READ_OBJ)
	$(CXX) $(CFLAGS) -o $@ $^

$(BIN)/calculate: $(CALCULATE_OBJ)
	$(CXX) $(CFLAGS) -o $@ $^


$(OBJ)/write_in_file.o: $(WRITE_SRC) $(HEADERS)
	$(CXX) $(CFLAGS) -c -o $@ $< -I$(INC)

$(OBJ)/read_from_file.o: $(READ_SRC) $(HEADERS)
	$(CXX) $(CFLAGS) -c -o $@ $< -I$(INC)

$(OBJ)/calculate_age.o: $(CALCULATE_SRC) $(HEADERS)
	$(CXX) $(CFLAGS) -c -o $@ $< -I$(INC)


clean:
	rm -rf $(OBJ_DIR)/*.o $(BIN_DIR)/*

.PHONY: all write read calculate clean