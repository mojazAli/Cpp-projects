#include<iostream>
using namespace std;
int main()
{
	int n = 0, i = 0;
	double totalCost = 0.0, totalCoins = 0.0, avgCost = 0.0;
	double *coinsPtr = NULL, *pricePtr = NULL;
	cout<<"Enter no. of purchases: ";
	cin>>n;
	coinsPtr = new double[n];
	pricePtr = new double[n];
	for(i = 0; i < n; i++)
	{		
		cout<<i+1<<") "<<"Enter price at which coins are purchased: ";
		cin>>pricePtr[i];
		cout<<"Enter quantity of purchased coins: ";
		cin>>coinsPtr[i];
		totalCost += coinsPtr[i] * pricePtr[i];
		totalCoins += coinsPtr[i];
	}
	avgCost = totalCost / totalCoins;
	cout<<"Average cost: "<<avgCost;
	delete []coinsPtr;
	delete []pricePtr;
	coinsPtr = NULL;
	pricePtr = NULL;
	return(0);
}