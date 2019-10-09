#include <iostream>

int main() {
	int T;
	long long int N, ssd;
	cin >> T;
	for(int t=0; t<T; t++) {
		cin >> N;
		ssd = (N * (N+1) * ( 3*N*(N+1) - 4*N -2)) / 12;
		cout << ssd << endl;
	}
		
	return 0;
}
