#include<iostream>
using namespace std;
class node
{
private:
	int item;
	node * next;

public:
	// methods for setting and getting data members value.
	void setItem(int aItem)
	{ item = aItem; }
	int getItem()
	{ return (item); }
	void setNext(node * aNext)
	{ next = aNext; }
	node * getNext()
	{ return (next); }
};

class queue
{
private:
	node * front, * rear;

public:
	// constructor is required to point that queue is empty.
	queue()
	{ front = rear = NULL; }
	void enqueue(int num)
	{
		if(front == NULL)
		{
			front = new node();

			rear = front;

			rear->setNext(NULL);
			rear->setItem(num);
		}
		else
		{
			node * t = front, * newNode = new node();

			newNode->setNext(NULL);
			newNode->setItem(num);

			while(t->getNext())
				t = t->getNext();

			t->setNext(newNode);

			rear = newNode;
		}
	}
	int dequeue()
	{
		node * t = front;
		int item = front->getItem();

		front = front->getNext();

		delete t;
		t = NULL;

		return (item);
	}
	int getFront()
	{ return (front->getItem()); }
	bool isEmpty()
	{ return (front == NULL); }
	void display()
	{
		node * t = front;
		cout<<"\n\n Elements in queue: ";
		do
		{
			cout<<"\n"<<t->getItem();
			t = t->getNext();
		} while (t);							
		// condition of loop will false when "t" will be NULL 
		// and this will only happen when "t" was already pointing to last node.
		// and then it point to NULL finally.
		cout<<"\nEnd of queue..";
	}
};

int main()
{
	queue q1;
	
	q1.enqueue(45);;
	q1.enqueue(55);
	q1.enqueue(35);

	q1.display();
	cout<<"\n1st num in queue: "<<q1.getFront();	 //45

	cout<<"\nRemoved element: "<<q1.dequeue();		 //45

	q1.display();
	cout<<"\n1st num in queue: "<<q1.getFront();	 //55

	return (0);
}