all: tictactoe.out

tictactoe.out:
	g++ -std=c++17 -o tictactoe.out tictactoe.cpp

run: tictactoe.out
	./tictactoe.out

clean:
	rm tictactoe.out