#ifndef NODE_H
#define NODE_H

#include "Object.h"

class Node{
private:
  Object* data;
  Node* next;

public:
  Node(Object*);
  Node();

  Object* getData();
  void setData(Object*);

  Node* getNext();
  void setNext(Node*);

  ~Node();

};

#endif
