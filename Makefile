SOURCES := $(wildcard *.cpp)
TARGET := tictactoe.exe

all: $(TARGET)

$(TARGET): $(SOURCES)
	g++ -std=c++17 -o $(TARGET) $^

run: $(TARGET)
	./$(TARGET)


.PHONY: clean

clean:
	rm -r *.exe