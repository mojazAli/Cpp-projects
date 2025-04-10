#include<iostream>
#include<string.h>
using namespace std;
struct car
{
private:
	int modelYear;
	float mileage;
	char brand[20];
public:
	void setDetails(int aModelYear, float aMileage, const char aBrand[])
	{
		modelYear = aModelYear;
		mileage = aMileage;
		strcpy(brand, aBrand);
	}
	void showDetails()
	{
		cout<<"\n\nModel year: "<<modelYear
			<<"\nMileage: "<<mileage<<" km"
			<<"\nBrand: "<<brand;
	}
};
int main()
{
	car c;
	c.setDetails(2030,0,"Land Crusor TXL");
	c.showDetails();
	return(0);
}