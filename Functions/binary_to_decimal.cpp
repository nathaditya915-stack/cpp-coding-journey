#include <iostream>
using namespace std;

int bin_to_dec(int n) {
    int ans=0;
    int pow=1; // 2^0=1, 2^1=2, 2^2=4, 2^3=8, 2^4=16, 2^5=32.....

    while (n>0) {

    int rem = n%10; 
    ans += (rem*pow);
    n /= 10;
    pow *= 2;
    }
    return ans;
}

int main () {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    cout << "Decimal equivalent: " << bin_to_dec(n) << endl;

    return 0;
}
