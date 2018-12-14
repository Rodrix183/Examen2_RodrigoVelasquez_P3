#include "Node.h"

Node::Node(){
  data=0;
  next=0;
}

Node::Node(Usuario* data){
  this->data = data;
  next = 0;
}

Usuario* Node::getData(){
  return data;
}
void Node::setData(Usuario* pData){
  data = pData;
}

Node* Node::getNext(){
  return next;
}
void Node::setNext(Node* pNext){
  next = pNext;
}

Node::~Node(){

}
