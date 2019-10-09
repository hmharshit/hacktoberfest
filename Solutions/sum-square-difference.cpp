#include <bits/stdc++.h>

using namespace std;

int main(){
int T, n,n2,sum=0,sqsum=0,diff=0;
cin >>T;
for(int i=0;i<T;i++){
cin>>n;

for(int j=1;j<=n;j++){
sum=sum+j;
sqsum=sqsum+pow(j,2);
}
sum=pow(sum,2);
diff=sum-sqsum;
cout<<diff<<"\n";
sum=0;sqsum=0;
    
} 
return 0;
}
