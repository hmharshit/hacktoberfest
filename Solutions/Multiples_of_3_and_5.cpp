#include<iostream>

using namespace std;


int main(){
int i; long s=0;

	for(i=1;i<1000;i++){
		if((i%3==0)||(i%5==0)){ s+=i;}
				}   
	

	   cout<<"Multiples of 3 or 5 below 1000 are : "<<s;
	
return 0;	
}
