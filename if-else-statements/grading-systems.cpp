#include <bits/stdc++.h>
using namespace std;    
int main () {

    int marks; 
    cout << "Enter your marks: " << endl;
    cin >> marks;
    if (marks<25) {
        cout << "F";
    } else if (marks>25 && marks<=45) {
        cout << "E";
    } else if (marks>45 && marks<=50) {
        cout << "D";
    } else if (marks>50 && marks<=60) {
        cout << "C";
    } else if (marks>60 && marks<=80) {
        cout << "B";
    } else if (marks>80 && marks<=100) {
        cout << "A";
    } else {
        cout << "Invalid Marks";
    }
 return 0;
}
