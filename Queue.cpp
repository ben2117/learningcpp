#include <cstddef>

#include "Queue.h"

Queue::Queue(){
	list = new LinkedList();
}

void Queue::enqueue(int val){
	list->append(val);
}

int Queue::dequeue(){
	int value = list->getHead();
	list = list->tail();
	return value;
}

int Queue::peek(){
	return list->getHead();
}
