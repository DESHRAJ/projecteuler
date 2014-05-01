#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int prime(unsigned long long int n )
{
	int flag=1;
    if(n==2)
        return 1;
    else
    {
        for(unsigned long long int i=2;i<=ceil(sqrt(n));i++)
        {
            if(n%i==0)
            {
                flag=0;
                return 0;
            }
        }
        if(flag==1)
            return 1;
        }
}
int main()
{
	unsigned long long int max=0;
	unsigned long long int n=600851475143;
	for(unsigned long long int i=2;i<=n/2;i++)
	{
		if(n%i==0 && prime(i))
		{
			cout<<i<<endl;
			max=i;
		}
	}
	cout<<max;
	getch();
	
	return 0;
	
}
