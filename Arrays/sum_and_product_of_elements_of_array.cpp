#include <iostream>
using namespace std; 

int main() {
    int sum =0;
    int product =1;
    int size =7;
    int arr[size] = {1,2,3,4,5,6,7};

    for(int i=0; i<size; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of the given numbers in the array: " << sum << endl;
    
    cout << "Product of the given numbers in the array: " << product << endl;
    return 0;
}
