/*Given a number N, we have to find the sum of even fibonaccci nos.
 less than the given number N.
 Code by iamJL
 */
#include<bits/stdc++.h>
using namespace std;
int fib[10000];
int main()
{
  int t;
  cin>>t;
  fib[0]=1,fib[1]=2;
  while(t--)
  {
    int n,i=2;
    cin>>n;
    int sum = 2;
    while(1)
    {
     fib[i]=fib[i-1]+fib[i-2];
        if(fib[i]>n)
           break;
        if(fib[i]%2==0)
         sum+=fib[i];
      i++;
        }
     cout<<sum<<endl;
  }
  return 0;
}
