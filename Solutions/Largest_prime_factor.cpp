#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long i;
    long long n=600851475143L;

        for(i=2;i<=sqrt(n);i++) {
            while(n%i==0){
                n/=i;
                        }
                                }


       cout<<"Largest prime factor : "<< n;

return 0;
}
