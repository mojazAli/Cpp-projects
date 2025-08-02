#include "Node.cpp"

class list
{
private:
	int size;
	node *headNode, *currentNode;

public:
	list()
	{
		size = 0;
		headNode = NULL;
		currentNode = NULL;
	}

	void add(faculty aObject)
	{
		if (headNode == NULL)
		{
			headNode = new node;
			currentNode = headNode;
			currentNode->set(aObject);
			currentNode->setNext(NULL);
			size++;
		}
		else
		{
			node *t = new node;
			t->set(aObject);
			if (currentNode->getNext() == NULL)
			{
				t->setNext(NULL);
				currentNode->setNext(t);
			}
			else
			{
				t->setNext(currentNode->getNext());
				currentNode->setNext(t);
			}
			currentNode = currentNode->getNext();
			size++;
		} // end of else block
	} // end of add()

	faculty get()
	{
		return (currentNode->get());
	}

	bool next()
	{
		if (currentNode == NULL)
			return (false);

		currentNode = currentNode->getNext();
		if (currentNode == NULL)
			return (false);
		else
			return (true);
	}

	void start()
	{
		currentNode = headNode;
	}

	int getLength()
	{
		return (size);
	}
	// defined friend function outside of the class
	friend void traverse(list aList);
};
// definition of friend function of list class
void traverse(list aList)
{
	if (aList.headNode == NULL)
		cout << "\nList is empty";
	else
	{
		aList.start();
		while (aList.currentNode)
		{
			
			(aList.currentNode->get()).showDetails();
			aList.currentNode = aList.currentNode->getNext();
		}
	}
}