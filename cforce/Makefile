# build an executable using make command

# Compiler flags:
#   -g adds debugging info to the executable file
#   -Wall turns on most, but not all, compiler warnings
CC = g++
CFLAGS = -g -Wall

# Build targer executable:
TARGET = 306-c

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

# To start over from scratch, type 'make clean'
clean:
	rm $(TARGET) 
