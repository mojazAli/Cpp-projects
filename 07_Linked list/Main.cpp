#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main()
{
	int noOfRec = 5, i = 0;
	list l1;
	faculty obj;

	for (i = 0; i < noOfRec; i++) // 5 records to be entered
	{
		obj.inputDetails(); // inputting details
		l1.add(obj);		// adding node to list
	}
	traverse(l1); // traversing complete list
	// l1.remove(); pending

	return (0);
}
