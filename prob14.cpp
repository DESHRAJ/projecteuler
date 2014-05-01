#include<iostream>
#include<conio.h>
using namespace std;

int func(signed long long int n)
{
	if(n%2==0)
	{
		func(n/2);
	}
	else if(n!=1)
	{
		func(3*n+1);
	}
	if(n==1)
		return 1;
	else 
		return 0;
	
} 


int main()
{
	signed long long int n;
	for(signed long long int i=1000000;i>=1;i--)
	{
		cout<<i<<endl;
		if(func(i)==1)
			{
				n=i;	
				break;
			}
	}	
	cout<<n;


getch();
return 0;

	
}
