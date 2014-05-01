#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;

int palendrome(unsigned long long int n )
{
	unsigned long long int sum=0,r=0,a=0;
	a=n;
	
    for(unsigned long long int i=6;n>=1;i--)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*(pow(10,i));
    }
    
    if(a==sum)
    {
        return 1;
    }
    else
        return 0;
                    
}
                        
        
        
int main()
{
   unsigned long long int max=0;
   
   for(long x=999;x>=100;x--)
   {
   		for(long y=999;y>=100;y--)
   		{
   			if(palendrome(x*y))
   			{n
   				if(max<=x*y)
   				{
   					max=x*y;
   				}
   			}
		}
		cout<<max<<endl;
   }
 
   getch();
   return 0;
   		
   }
                    
