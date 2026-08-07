#include <iostream>
#include <algorithm>
#include <climits>
using namespace std; 
 
int main () {
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int size =7;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < size; i++) {
        largest = max(largest,arr[i]);
        smallest = min(smallest,arr[i]);
    }

    swap (largest, smallest);

cout << "Largest element is: " << largest << endl;  
cout << "Smallest element is: " << smallest << endl;

return 0;
}
