#ifndef NODE_H
#define NODE_H

#include "Usuario.h"

class Node{
private:
  Usuario* data;
  Node* next;

public:
  Node(Usuario*);
  Node();

  Usuario* getData();
  void setData(Usuario*);

  Node* getNext();
  void setNext(Node*);

  ~Node();

};

#endif
