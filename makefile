Probando:	Main.o	Node.o	Usuario.cpp
	g++	Main.o	Node.o	Usuario.o	-o	Probando

Node.o:	Node.h	Node.cpp
	g++	-c	Node.cpp

Usuario.o:	Usuario.h	Usuario.cpp
	g++	-c	Usuario.cpp
	
Main.o:	Main.cpp
	g++	-c	Main.cpp
