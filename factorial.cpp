//find factorial
#include<iostream>
using namespace std;
int main()
{
	int num,factorial=1,i;
	cin>>num;
	if(num<0)
	{
		cout<<"This is error";
	}
	else
	{
	for(i=1;i<=num;i++)
	{
	factorial=factorial*i;
}
cout<<"factorial of "<<num<<"is:"<<factorial;
}
return 0;		
	
}
