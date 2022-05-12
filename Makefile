CC = g++
CFLAGS = -g -Wall -O4 -std=gnu++20
TARGET = note
all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

run: $(TARGET)
	./$(TARGET)

install: $(TARGET)
	cp -v $(TARGET) /bin/$(TARGET)
