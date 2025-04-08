/* List of marks.*/
#include <iostream>
using namespace std;
struct node
{
	int item;
	node *nextNode;
};
void insertAtLast(node **s, int marks)
{
	node *t = *s, *n = new node; // newNode
	n->item = marks;
	n->nextNode = NULL;
	if(*s == NULL)
		*s = n;
	else
	{
		while(t->nextNode)
			t = t->nextNode;
		t->nextNode = n;
	}
}
void deleteLastNode(node **s)
{
	node *t = *s, *secondLastNode = NULL;
	while(t->nextNode)
	{
		t = t->nextNode;
		if(t->nextNode != NULL)
			secondLastNode = t;
	}
	delete t;
	t = NULL;
	secondLastNode->nextNode = NULL;
}
void viewList(node *s)
{
	cout<<"\n";
	while(s->nextNode)
	{
		cout<<s->item<<", ";
		s = s->nextNode;
	}
	cout<<s->item;
}
int main()
{
	node *start = NULL;
	insertAtLast(&start, 32);
	insertAtLast(&start, 37);
	insertAtLast(&start, 25);
	insertAtLast(&start, 41);
	insertAtLast(&start, 35);
	viewList(start);
	deleteLastNode(&start);
	viewList(start);
	insertAtLast(&start, 45);
	insertAtLast(&start, 39);
	viewList(start);
	return (0);
}