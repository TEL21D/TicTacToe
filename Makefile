SOURCES = $(wildcard *.cpp)
all: tictactoe.exe

tictactoe.exe: $(SOURCES)
	g++ -std=c++17 -o tictactoe.exe tictactoe.cpp

run: tictactoe.exe
	./tictactoe.exe


.PHONY: clean

clean:
	del /q *.exe