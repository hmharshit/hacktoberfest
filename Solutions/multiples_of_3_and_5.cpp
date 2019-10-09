#include <iostream>
using namespace std;

int main(){

  int num;
  cin>>num;
  if(num%3==0 && num%5==0){
    cout<<"Multiple of both 3 and 5";
  }
  else if(num%3==0){
    cout<<"Multiple of 3 only";
  }
  else if(num%5==0){
    cout<<"Mutiple of 5 only";
  }
  else{
    cout<<"Try again";
  }
  return 0;
}
