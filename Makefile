main: main.cpp QS.cpp QS.h QSInterface.h
	g++ -std=c++11 main.cpp QS.cpp -o main
debugged: main.cpp
	g++ -std=c++11 main.cpp -o debugged -g