#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string experiment(int x) {
    int a=0;
    a=a>>1;
    cout <<a<<" " << endl;
    return "a";
    
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int a = 3;
    int b = a<<3;
    // cout << size << endl;
    cout << b<< endl;
}
