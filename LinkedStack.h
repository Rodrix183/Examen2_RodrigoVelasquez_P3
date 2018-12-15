#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include "Node.h"
#include "Stack.h"

class LinkedStack : public Stack{
private:
  Node* inicio;
  int size = 0;
public:
  LinkedStack();
  virtual bool push(Usuario*);
  virtual Usuario* pop();
  virtual Usuario* top();
  //virtual void print();

  int getSize();
  ~LinkedStack();
};

#endif
