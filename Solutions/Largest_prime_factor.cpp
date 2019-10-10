#include<iostream>

using namespace std;

int isPrime(int num)
{
	int flag=1;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}	
	}
	return flag;
}

int largestFactor(int num)
{
	for(int i=num;i>1;i--)
	{
		if(num%i==0 && isPrime(i))
		{
			return i;
		}
	}
	
	return 0;
}

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int num;
		cin>>num;
		cout<<largestFactor(num)<<endl;				
	}
return 0;	
}
