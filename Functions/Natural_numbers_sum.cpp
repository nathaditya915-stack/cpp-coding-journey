#include <iostream>
using namespace std;

void sumOfNaturalNum (int n) {
    int sum =0;

    for (int i=0; i < n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
}



int main () {
    sumOfNaturalNum(101);
    sumOfNaturalNum(100);
    return 0;
} // u can also revrify it using the formula r(r+1)/2
