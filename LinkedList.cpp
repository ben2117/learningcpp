//----LinkedList.cpp file----

#include "LinkedList.h"

LinkedList::Node::Node() {
  data = 0;
  next = 0;
}

LinkedList::Node::Node(Node * n, int d){
  data = d;
  next = n;
}

LinkedList::Node::~Node() {
}

int LinkedList::Node::getData(){
  return data;
}

LinkedList::Node * LinkedList::Node::getNext(){
  return next;
}

void LinkedList::Node::setNext(Node * n){
  next = n;
}

LinkedList::LinkedList(){
  head = 0;
  length = 0;
}

LinkedList::~LinkedList(){

  if (head != 0){

    Node * current = head;
    Node * next = current->getNext();
    while (next != 0){
      delete current;
      current = next;
      next = current->getNext();
    }
  }
}

bool LinkedList::isEmpty(){
  return length == 0;
}

void LinkedList::prepend(int c){
  Node * newNode = new Node(head, c);
  head = newNode;
  length++;
}

void LinkedList::append(int c){

  if (head == 0){
    prepend(c);
  }
  else{
    Node * current = head;
    while (current->getNext() != 0){
      current = current->getNext();
    }
    current->setNext(new Node(0, c));
    length++;
  }

}

int LinkedList::getHead(){
  return head->getData(); //here we call the the getData method of the node that the head points to
}

LinkedList * LinkedList::tail(){
  //we create a new list
  LinkedList * newList = new LinkedList();
  //if the head does not point to null
  if (head != 0){
   
    //we loop through the rest of the list and add it to the new list 
    Node * current = head->getNext();
   
    while (current != 0){
      newList->append(current->getData());
      current = current->getNext();
    }
  }
  //we return the rest of the list minus the head
  return newList;
  
}
