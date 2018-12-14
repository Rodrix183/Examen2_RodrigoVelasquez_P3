#include "LinkedStack.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

LinkedStack::LinkedStack(){
  inicio = 0;
}
bool LinkedStack::push(Usuario* use){
  Node* newNode = new Node(use);//crear nodo
  newNode->setNext(inicio);//enlazar con el siguiente nodo
  inicio = newNode;
  return true;
}
Usuario* LinkedStack::pop(){
  if (inicio==0) {
    return 0;
  }else{
    Node* tmp = inicio;
    inicio = inicio -> getNext();
    Usuario* retValue = tmp->getData();
    tmp->setData(0);
    tmp->setNext(0);
    delete tmp;
    return retValue;
  }
}
Usuario* LinkedStack::top(){
  if (inicio==0) {
    return 0;
  }else{
    return inicio -> getData();
  }
}
/*void LinkedStack::print(){
  Node* tmp = inicio;
  while (tmp != 0) {
    cout<<tmp->getData()->toString()<<">"<<endl;
    //moverse hacia adelante
    tmp = tmp->getNext();
  }
}*/

LinkedStack::~LinkedStack(){
  delete inicio;
}
