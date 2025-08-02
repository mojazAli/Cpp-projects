#include "faculty.cpp"
class node
{
private:
	faculty object;
	node *nextNode;

public:
	// member functions to set and get object (data item)
	void set(faculty aObject)
	{
		object.setName(aObject.getName());
		object.setAge(aObject.getAge());
		object.setPost();
	}
	
	faculty get()
	{
		return (object);
	}
	// memeber functions to set and get address of nextNode pointer.
	void setNext(node *aNext)
	{
		nextNode = aNext;
	}
	node *getNext()
	{
		return (nextNode);
	}
};