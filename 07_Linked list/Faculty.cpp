#include <iostream>
using namespace std;

class faculty
{
private:
	string name;
	int age;
	string post;

public:
	void setName(string aName)
	{
		name = aName;
	}

	string getName()
	{
		return (name);
	}
	
	void setAge(int aAge)
	{
		if (aAge > 0)
			age = aAge;
		else
			age = 0;
	}
	int getAge()
	{
		return (age);
	}

	void setPost()
	{
		if (age >= 25 && age <= 35)
			post = "Lecturer";
		else if (age >= 36 && age <= 45)
			post = "Assistant professor";
		else if (age >= 46 && age <= 60)
			post = "Professor";
		else
			post = "No post. Age is not between 25 to 60";
	}

	string getPost()
	{
		return (post);
	}
	void inputDetails()
	{
		cout << "\nEnter faculty record: ";
		cout << "\nEnter name: ";
		cin >> name;
		cout << "\nEnter age: ";
		cin >> age;
		setPost();
	}
	void showDetails()
	{
		cout << "\n\nFaculty record"
			 << "\n------------------"
			 << "\nName: " << name
			 << "\nAge: " << age
			 << "\nPost: " << post
			 << "\n------------------";
	}
};
