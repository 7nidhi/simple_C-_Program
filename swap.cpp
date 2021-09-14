//swap two numbers
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,temp;
	cin>>num1;
	cin>>num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"after swap num1:"<<num1<<endl;
	cout<<"after swap num2:"<<num2;
	return 0;
}
