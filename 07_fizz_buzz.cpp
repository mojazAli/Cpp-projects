#include<iostream>
using namespace std;


void printFizzBuzz(int n)
{
	int i;
	
	for( i = 1; i <= n; i++ )
	{
		if( i % 3 == 0 )
		{
			if( i % 5 == 0 )
				cout<<"FizzBuzz\n";
			else
				cout<<"Fizz\n";
		}
		else if( i % 5 == 0 )
			cout<<"Buzz\n";
		else
			cout<<i<<"\n";
	}
	
}

int main()
{
	printFizzBuzz(15);
		
	return (0);
}
