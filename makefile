game: main.o Plansza.o Window.o Textures.o
	g++ main.o Plansza.o Window.o Textures.o -o math

main.o: main.cpp
	g++ -c main.cpp

Plansza.o: Plansza.cpp
	g++ -c Plansza.cpp

Window.o: Window.cpp
	g++ -c Window.cpp

Textures.o: Textures.cpp
	g++ -c Textures.cpp

clean:
	rm *.o game
