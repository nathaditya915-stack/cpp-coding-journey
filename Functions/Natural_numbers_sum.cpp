#include <iostream>
using namespace std;

int sumofNum (int n){
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = sumofNum(n);
    cout << "The sum of numbers from 1 to " << n << " is: " << result << endl;

    return 0;
} // u can also revrify it using the formula n(n+1)/2
