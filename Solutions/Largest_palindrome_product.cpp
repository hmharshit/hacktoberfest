#include<iostream>

using namespace std;

int main(){
long i,j,s=0,n,rw=0,r,q;

	for(i=100;i<1000;i++){
	     	for(j=100;j<1000;j++){
                n=i*j; q=n;
                    while(q>0){
                        r=q%10;
                        rw=rw*10+r;
                        q=q/10;  	}

		   if(rw==n&&n>s){ s=rw; }

		   rw=0;
	   }
	}

	cout<<"Largest  palindrome 3 digit is : "<<s;

return 0;
}
