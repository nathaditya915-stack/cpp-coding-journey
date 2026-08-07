#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm> // Required for max() and min()
using namespace std;

int main () {
    int size = 6; 
    int nums[] = {1,221,220,-300,-301,0};
    int largest = INT_MIN; 
    int largestindex = -1;
    int smallest = INT_MAX;
    int smallestindex = -1;

    for (int i = 0; i < size; i++) {
        largest = max (nums[i], largest);
        smallest = min (nums[i], smallest);
        if (nums[i] == largest) {
            largestindex = i;
        }
        if (nums[i] == smallest) {
            smallestindex = i;
        }
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The index number for largest value is: " << largestindex  << endl;
    cout << "The smallest number is: " << smallest << endl;
    cout << "The index number for smallest value is: " << smallestindex  << endl;
    return 0;
}
