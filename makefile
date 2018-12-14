Probando:	Main.o	Node.o	Usuario.o	Stack.o	LinkedStack.o
	g++	Main.o	Node.o	Usuario.o	Stack.o	LinkedStack.o	-o	Probando

Node.o:	Node.h	Node.cpp
	g++	-c	Node.cpp

Usuario.o:	Usuario.h	Usuario.cpp
	g++	-c	Usuario.cpp

Stack.o:	Stack.h	Stack.cpp
	g++	-c	Stack.cpp

LinkedStack.o:	LinkedStack.h	LinkedStack.cpp
	g++	-c	LinkedStack.cpp
	
Main.o:	Main.cpp
	g++	-c	Main.cpp
