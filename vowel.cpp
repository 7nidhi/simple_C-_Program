//check whether char is vovel or consonants
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	switch(ch)
	{
	
	case 'a':
		
	    cout<<"vowel";
	    break;
	case 'e':
		cout<<"vowel";
		break;
	case 'i':
		cout<<"vowel";
		break;
	case 'o':
		cout<<"vowel";
		break;
	case 'u':
		cout<<"vowel";
		break;
	default:
		cout<<"Consonants";
	 	
		
}
return 0;
}