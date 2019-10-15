// Solution to the Problem Even_Fibonacci_Numbers

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> fib;

        int f0 = 0, f1 = 1, nextTerm = f0 + f1;
        while (nextTerm < N)
        {
            fib.push_back(nextTerm);
            f0 = f1;
            f1 = nextTerm;
        }

        int FibSum = 0;

        for (int i = 0; i < fib.size; ++i)
        {
            if (fib[i] % 2 == 0)
            {
                FibSum += fib[i];
            }
        }
        cout << FibSum << "\n";
    }
}