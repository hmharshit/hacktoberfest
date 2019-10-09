#include<iostream>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int sum=0;
        cin>>N;
        for(int i=3;i<N;i++)
        {
            if(i%3==0||i%5==0)
                sum+=i;
        }
        if(sum>0)
            cout<<sum<<endl;
        else
            cout<<endl;
    }

}
