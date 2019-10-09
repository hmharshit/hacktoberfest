#include<bits/stdc++.h> 
using namespace std; 

typedef long long int ll; 

int hcf(int a, int b) 
{ 
	if (b == 0) 
		return a; 
	return hcf(b, a % b); 
} 

ll lcm(int arr[], int n) 
{ 
	
	ll ans = arr[0]; 

	
	for (int i = 1; i < n; i++) 
		ans = (((arr[i] * ans)) / 
				(hcf(arr[i], ans))); 

	return ans; 
} 


int main() 
{ 
    int t;
    cin>>t;
   
    while(t--)
    {
        int endterm;

        cin>>endterm;
         int arr[endterm];
        for(int i=1;i<=endterm;i++)
         arr[i-1]=i;
    
	int n = sizeof(arr) / sizeof(arr[0]); 
	printf("%lld", lcm(arr, n)); 
	} 
return 0; 
}
