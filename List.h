//----List.h file----

#ifndef LIST_H_
#define LIST_H_

class List {
public:
  virtual ~List() {};  //this is the destructor
  virtual bool isEmpty() = 0; // to check if the list is empty
  virtual void prepend(int c) = 0; 
  virtual void append(int c) = 0;
  virtual int getHead() = 0; //the head will be a pointer to the start of the list
  virtual List * tail() = 0; // the tail will be a list returned from a certain point. 
};

#endif
