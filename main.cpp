#include <iostream>

#include "Queue.h"

using std::cout;

int main(){

	Queue * q = new Queue();
	q->enqueue(2);
	q->enqueue(6);
	cout << q->dequeue() << '\n';

	cout << q->peek() << '\n';

	cout << q->dequeue() << '\n';

	return 0;
} 
