#include <iostream>
#include <cstdio>
using namespace std;

int dec_to_bin (int n) {
    int ans = 0;
    int pow = 1; // 10^0 = 1, 10^1 = 10, 10^2 = 100, 10^3 = 1000, ...

    while (n>0){
       int rem = n%2;
       n /= 2; 

       ans += (rem*pow);  
       pow *= 10;
    }
    return ans;
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << dec_to_bin(n) << endl;
    return 0;
}
