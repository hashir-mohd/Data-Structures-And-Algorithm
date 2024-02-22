#include <iostream>
#include <stack>
using namespace std;

void prevGreater(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    };
    cout <<endl;
    stack <int> s;
    s.push(0);
    cout << "-1" << " ";
    for(int i=1 ; i< n ;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            cout << "-1" << " ";
        }else{
            cout << arr[s.top()] << " ";
        }
        s.push(i);
    }
}

int main(){
    int arr[5]={3,13,2,34,23};
    prevGreater(arr,5);
    return 0;
}