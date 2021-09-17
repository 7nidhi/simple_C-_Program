//display fibonacci
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=1,k,num,x;
	cout<<"enter the num for fibonacci lenght";
	cin>>num;
	cout<<i<<j;
	for(x=2;x<=num;x++)
	{
	k=i+j;
	cout<<k;
	i=j;
	j=k;
	}
	return 0;
}
