FLAGS=-ansi -pedantic-errors -Wall

all: grade guess cricket file

grade:
	g++ $(FLAGS) -o grade grade.cpp

guess:
	g++ $(FLAGS) -o guess guess.cpp

cricket:
	g++ $(FLAGS) -o cricket cricket.cpp

file:
	g++ $(FLAGS) -o file file.cpp

clean:
	rm -f grade guess cricket file
