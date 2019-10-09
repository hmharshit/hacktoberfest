#include<iostream>

using namespace std;

int main(){

	    long a=1,b=2,c=0,s=0;
	    long n=4000000;



            while(c<n){
	    		c=a+b;
		    	a=b;
	    		b=c;
	    		    if(c%2==0){ s+=c; }
		   }


	    cout<<"Sum of Even valued Fibbonaci Sequence : "<<s+2;

return 0;
}
