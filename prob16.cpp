#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	unsigned long long int n=2,r=0,sum=0;
	n=pow(n,1000);
	
	while(n>1)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	cout<<sum;
	getch();
	return 0;
}
