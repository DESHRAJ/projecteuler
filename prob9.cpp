#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	signed long long int max=0;
	for(int i=1;i<=500;i++)
	{
		for(int j=1;j<=500;j++)
		{
			for(int k=1;k<=500;k++)
			{
				if(i+j+k==1000 && (i*i)+(j*j)==(k*k))
				{
					max=i*j*k;
					break;
				}
					
			}
		}
	}
	cout<<max;
	getch();
	return 0;
	
}
