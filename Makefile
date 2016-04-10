FLAGS=-ansi -pedantic-errors -Wall

all: grade guess cricket file calctime

grade:
	g++ $(FLAGS) -o grade grade.cpp

guess:
	g++ $(FLAGS) -o guess guess.cpp

cricket:
	g++ $(FLAGS) -o cricket cricket.cpp

file:
	g++ $(FLAGS) -o file file.cpp

calctime:
	g++ $(FLAGS) -o calctime calctime.cpp

clean:
	rm -f grade guess cricket file calctime
