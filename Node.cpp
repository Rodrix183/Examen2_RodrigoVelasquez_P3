#include "Node.h"

Node::Node(){
  data=0;
  next=0;
}

Node::Node(Object* data){
  this->data = data;
  next = 0;
}

Object* Node::getData(){
  return data;
}
void Node::setData(Object* pData){
  data = pData;
}

Node* Node::getNext(){
  return next;
}
void Node::setNext(Node* pNext){
  next = pNext;
}

Node::~Node(){
  return;
}
