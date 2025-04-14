#include<iostream>
#include<string.h>
using namespace std;
class node
{
public:
	char *str;
	node *nextNode;
};
void addNode(node **, const char *);
void viewList(node *);
void deleteFirstNode(node **);
int strLen(const char *);
int main()
{
	node *start = NULL;
	cout<<"\nView List";
	viewList(start);
	cout<<"\nDelete Node";
	deleteFirstNode(&start);
	cout<<"\nAdd Nodes";
	addNode(&start, "Daska");
	addNode(&start, "Gujranwala");
	addNode(&start, "Sialkot");
	addNode(&start, "Lahore");
	cout<<"\nView List";
	viewList(start);
	cout<<"\nDelete Node";
	deleteFirstNode(&start);
	cout<<"\nView List";
	viewList(start);
	return(0);
}
void addNode(node **s, const char *city)
{
	node *t = NULL;
	int len = 0;
	if(*s == NULL)
	{
		*s = new node;
		len = strLen(city) + 1;
		(*s)->str = new char[len];
		strcpy((*s)->str, city);
		(*s)->nextNode = NULL;
	}
	else
	{
		t = *s;
		while(t->nextNode)
			t = t->nextNode;
		t->nextNode = new node;
		t = t->nextNode;
		len = strLen(city) + 1;
		t->str = new char[len];
		strcpy(t->str, city);
		t->nextNode = NULL;
	}
}
int strLen(const char *c)
{
	int i = 0;
	for(i = 0; c[i]; i++);
	return(i);
}
void viewList(node *start)
{
	node *t = start;
	if(t == NULL)
		cout<<"\nList is empty.";
	else
	{
		while(t->nextNode)
		{
			cout<<"\n"<<t->str;
			t = t->nextNode;
		}
		cout<<"\n"<<t->str<<"\n";
	}
}
void deleteFirstNode(node **s)
{
	node *t = NULL;
	if(*s == NULL)
		cout<<"\nCannot delete First Node."
			<<"\nbecause list is empty.";
	else
	{
		t = *s;
		*s = t->nextNode;
		delete t->str;
		t->str = NULL;
		delete t;
		t = NULL;
	}
}