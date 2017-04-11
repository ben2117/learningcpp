
#include "LinkedList.h"

using std::size_t;
using std::string;

class Queue : public LinkedList {

private:
	LinkedList * list;

public:
	Queue();
//	~Queue();
	void enqueue(int);
	int dequeue();
	int peek();
//	bool isEmpty();

};
