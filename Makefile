main: Book.o periodic.o Video.o Film.o Media.o main.o SearchEngine.o
	g++ -g Book.o periodic.o Video.o Film.o Media.o main.o SearchEngine.o -o main

main.o: main.cpp SearchEngine.h 
	g++ -g -c main.cpp

SearchEngine.o: SearchEngine.cpp SearchEngine.h Media.h Book.h Video.h periodic.h Film.h
	g++ -g -c  SearchEngine.cpp

Media.o: Media.cpp Media.h
	g++ -g -c Media.cpp

Book.o: Book.cpp Book.h
	g++ -g -c Book.cpp

periodic.o: periodic.cpp periodic.h
	g++ -g -c periodic.cpp

Video.o: Video.cpp Video.h
	g++ -g -c Video.cpp

Film.o: Film.cpp Film.h
	g++ -g -c Film.cpp

clean:
	rm -f *.o main
