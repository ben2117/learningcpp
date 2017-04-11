//----LinkedList.h file----

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <cstddef>
#include <string>

#include "List.h"

using std::size_t;
using std::string;

class LinkedList : public List { //our linked list inherits from list

 private:

  // we have a private sub class node
  // each element in the list will be contained in a Node, along with the location
  // of the next node in the list.
  class Node{ 

  private: //our private variables for the node class

    Node * next; // the node has apointer to the next node in the list
    int data; // the node contains an int variable 

  public:

    Node(); //node constructor
    Node(Node * next, int data); //overloaded node constructor
    ~Node(); //node destructor
    int getData(); //to return the data
    Node * getNext(); //to return the next pointer
    void setNext(Node *); //sets the pointer next will point to

  };

  Node * head; //we have the head of the list, this will point to the first node
  size_t length; //it is usefull to know the length of the list

 public:
  //our functions are no longer virtual so will be implemented in the linkedlist.cpp file
  LinkedList(); 
  ~LinkedList();
  bool isEmpty();
  void prepend(int c); 
  void append(int c);
  int getHead();
  LinkedList * tail();
  
};

#endif
