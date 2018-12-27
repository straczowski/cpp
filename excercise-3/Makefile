# makefile

INC = -I .

app: main.o birthday.o
	g++ main.o birthday.o -o app

main.o: main.cpp birthday.h
	g++ -c main.cpp 
	#g++ $(INC) -c main.cpp 

birthday.o: birthday.cpp birthday.h
	g++ -c birthday.cpp
	#g++ $(INC) -c birthday.cpp 

clean: main.o birthday.o
	rm birthday.o main.o

