# Tic-Tac-Toe
Dokumentation zum Spiel Tic-Tac-Toe


## Spielidee und Spielregeln
Tic Tac Toe wird von zwei Spielern auf einem 3x3-Feld gespielt.
Jeder Spieler hat ein Symbol, mit dem er Felder markiert, üblicherweise 'X' und 'O'.
Die beiden Spieler markieren abwechselnd jeweils ein Feld, bis entweder ein Spieler eine Zeile, Spalte oder Diagonale mit seinem Symbol gefüllt hat, oder bis das Feld voll ist.

1|2|3
-|-|-
4|5|6
7|8|9

**Gewinner** ist der Spieler dem es gelingt eine Zeile, Spalte oder Diagonale zu füllen:
X|2|O
-|-|-
4|X|6
O|8|X

## Anleitung
Die Felder sind mit den Zahlen von 1 bis 9 nummeriert. Diese Nummerierung wird zu Beginn des Spiels angezeigt.
Die Spieler werden abwechselnd nach ihrem Zug gefragt, wobei sie dann die Nummer eines Feldes eingeben und mit der Eingabetaste bestätigen.
Anschließend wird der gemachte Zug (das Spielfeld) angezeigt und der andere Spieler ist an der Reihe.
Sobald ein Spieler gewinnt oder das Spielfeld voll ist, wird dies angezeigt und das Spiel endet.

## Programm ausführen:
- Im Terminal:
  - Kompilieren und Auführen: `make run`
  - Programmdatei löschen: `make clean`
- Über VsCode:
  -   Windows: `Strg` + `SHIFT`+ `B`
  -   MAC: `CMD` + `SHIFT`+ `B`

# Architektur des Programms
Die main Funktion initialisiert das Spielfeld.
Das Spiel läuft in einer while Schleife, welche Prüft ob die Spielbedingungen noch gegeben sind (noch keine 9 Züge oder ein Spieler hat gewonnen).

## Aufbau, wesentliche Datenstrukturen und Funktionen
Spielfeld: Array/Vector von Strings

## Dateien des TicTacToe-Projekts
Erstmal nur eine Hauptdatei. Später Auslagerung in verschiedene Dateien möglich. Dabei kann die Verwendung von Header Dateien (`*.h`) erläutert werden.
