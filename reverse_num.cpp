//reverse the number
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int num,revnum=0,rem;
	cout<<"enter the num";
	cin>>num;
	while(num>1)
	{
	
	rem=num%10;
	revnum=(revnum*10)+rem;
	num=num/10;
}
	cout<<"reverse numbes is :"<<revnum;
	return 0;

	
}
