#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int main() {
	int T, N, lcm;
	cin >> T;
	for(int t=0; t<T; t++) {
		cin >> N;
		lcm = 1;
		// using lcm(a, b) = (a * b)/gcd(a, b)
		for (int i = 2; i <= N; i++) {
			lcm = ((i * lcm) / gcd(i, lcm));
		}
		cout << lcm << endl;
	}
	return 0;
}
