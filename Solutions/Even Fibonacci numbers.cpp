#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>have;
	unsigned int n,f0=0,f1=1,temp=f1,sum=0,k=0;
	cin >> n;
	while(f1 < n){
		temp = f0 + f1;
		if(temp < n && temp < 40000000){
			cout << temp << " ";
			if(temp % 2 == 0){
				have.push_back(temp);
				sum += temp;
				k++;
			}	
		}
		f0 = f1;
		f1 = temp;
	}
	cout << endl;
	cout << "We Have {";
	for(int i=0;i<k-1;i++){
	cout << have[i] << ",";
	}
	cout << have[k-1] <<"}" << endl;
	cout << "Sum is = " << sum;
}
