#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> v){
    for(int i =0 ; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

vector<int> nextGreater(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    };
    cout <<endl;
    vector <int> v;
    stack <int> s;
    s.push(n-1);
    // cout << "-1" << " ";
    v.push_back(-1);
    for(int i=n-2 ; i>-1 ;i--){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int ng =s.empty()?-1 : arr[s.top()];
        v.push_back(ng);
        // cout << ng << " ";
        s.push(i);
    }
    reverse(v.begin(),v.end());
    return v;
}

int main(){
    int arr[5]={3,13,2,34,23};
    // vector <int > res = nextGreater(arr,5);
    printVector(nextGreater(arr,5));
    return 0;
}