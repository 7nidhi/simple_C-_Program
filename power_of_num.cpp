//powerof a number
#include<iostream>
using namespace std;
int main()
{
	int base,power,result=1,i;
	cout<<"enter the base and power";
	cin>>base>>power;
	while(power!=0)
	{
		result=result*base;
		power--;
	
	}
	cout<<result;
	return 0;
}
