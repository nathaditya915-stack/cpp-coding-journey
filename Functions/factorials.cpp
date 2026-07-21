#include <iostream>
using namespace std;

void fact(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
}



int main () {
    fact(3);
    fact(4);
    fact(5);
    fact(10);

    return 0;
}
