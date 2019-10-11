#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,i,j,c=0;
    cin>>n;
    for(i=2;i<=n;i++)
    {
    	c=0;
    	for(j=2;j<i;j++)
    	{
    		if(i%j==0)
    			break;
    		else
    			c++;
		}
		if(c==(i-2))
		{
			sum=sum+i;
		}
	}
    cout<<sum;
}