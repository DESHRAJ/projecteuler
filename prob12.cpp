#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	
	signed long long int i;
	for(i=1;;i++)
	{
		cout<<i<<endl;
		signed long long int n=(i*(i+1))/2;
	
		int count=0;
		for(long j=1;j<=ceil(sqrt(n));j++)
		{
	 		if(n%j==0)
	 		{
	 			if(j*j!=n)
	 			count+=2;
	 			else 
	 			count+=1;
	 			//c=count;
	 		}
		}
	 	
		if(count>500)
	 		{
	 			cout<<"answer is "<<n;
	 			break;
	 		}	
	}
	getch();
	return 0;
	
}
