#include <iostream>

using namespace std;

int main()
{
    int number;
    long sumOfSqure, squreOfSum, difference;

    cout<<"Enter Natural Number --> ";
    std::cin >> number;

    squreOfSum = (number*(number + 1)) / 2;         //formula to find sum of first n natural number.
    squreOfSum = squreOfSum * squreOfSum;

    sumOfSqure = (number*(number + 1)*(2*number + 1)) / 6;          //formula to find sum of squre of first n natural numbers.

    difference = squreOfSum - sumOfSqure;

    cout<<"Difference of the sum squre is -->  "<<difference;

}
