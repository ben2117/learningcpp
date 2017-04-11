#include <iostream>

#include "LinkedList.h"

using std::cout;

int main(){

  LinkedList * list = new LinkedList();

  //we populate the list from 0 to 9
  for (int i = 0; i < 10; i++){
    list->append(i);
  }

  //we print out the value of the node that the head of the list points to
  cout << list->getHead() << "\n";
  //we then get the rest of the list (everything but the current node)
  LinkedList * tailList = list->tail();
  
  while (!tailList->isEmpty()){
    cout << tailList->getHead() << "\n";
    LinkedList * temp = tailList->tail();
    delete tailList;
    tailList = temp;
  }
  
}