//find the all root of quadratic equation
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2,discriminant,realpart,imaginarypart;
	cout<<"enter the values";
	cin>>a>>b>>c;
	discriminant=b*b-4*a*c;
	cout<<discriminant;
	if(discriminant>0)
	{
		x1=(-b+sqrt(discriminant)/(2*a));
		x2=(-b-sqrt(discriminant)/(2*a));
		cout<<"Roots are real and different"<<endl;
		cout<<"x1:"<<x1<<endl;
		cout<<"x2:"<<x2;	
	}
	else if(discriminant==0)
	{
		cout<<"Roots are real and same";
		x1=-b/(2*a);
		cout<<"x1 is equal to x2";		
	}
	else
	{
		realpart=-b/(2*a);
		imaginarypart=sqrt(-discriminant)/(2*a);
		cout<<"Roots are complex and different"<<endl;
		cout<<"x1="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
		cout<<"x2="<<imaginarypart<<"-"<<imaginarypart<<"i"<<endl;
	}
	return 0;
	
}
