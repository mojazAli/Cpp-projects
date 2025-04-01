#include<iostream>
using namespace std;
int CountAllPresenceOfSpecificDigit(int lower , int upper , int digit);
void NumToStr(int num , char str[]);
int FindLength(int num);
int CompareDigit(char str[] , int digit);

int main()
{
	int lower , upper , digit , total;
	total = 0;
	cout<<"Enter lower and upper limits of range: ";
	cin>>lower>>upper;
	cout<<"Enter digit, you want to count: ";
	cin>>digit;
	total = CountAllPresenceOfSpecificDigit(lower , upper , digit);//
	cout<<"Total: "<<total<<"\n";
	return(0);
}
int CountAllPresenceOfSpecificDigit(int lower , int upper , int digit)
{
	int i , total = 0;
	char str[10];
	for(i = lower; i <= upper; i++)
	{
		NumToStr(i , str);
		total += CompareDigit(str , digit);
	}
	return(total);
}
void NumToStr(int num , char str[])
{
	int i , length = FindLength(num);
	for(i = length - 1; i >= 0; i--)
	{
		str[i] = (num % 10) + 48;
		num /= 10;
	}
	str[length] = '\0';
}
int FindLength(int num)
{
	int count = 0;
	while(num)
	{
		num /= 10;
		count++;
	}
	return(count);
}
int CompareDigit(char str[] , int digit)
{
	int i , count = 0;
	for(i = 0; str[i]; i++)
	{	
		if(str[i] == (digit + 48) )
			count++;
	}
	return(count);
}