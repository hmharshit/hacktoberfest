#include<iostream>
using namespace std; 
int main()
{
    int  i=1,n,prime=2,count,flag,nprime; 
    cin>>n;
    while(i<=n)
    {
        flag=1;
        for(count=2;count<=prime-1;count++)
        {
            if(prime%count==0)  
            {
             flag=0;
             break;     
            }  
        }
        if(flag==1)
        {
        	nprime=prime;
            i++;
        }
        prime++;
    }
    cout<<nprime;
}