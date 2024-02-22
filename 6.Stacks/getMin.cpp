#include<iostream>
using namespace std;
#include <stack>

class MinStack {
      stack < pair < int, int >> s;
      
public:
    MinStack() {
        
    }
    
    void push(int x) {
        int mini;
        if(s.empty()){
            mini=x;
        }
        else{
            mini= min(x,s.top().second);
        }
        s.push({x,mini});
        

    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};







































// #include <iostream>
// #include <bits/stdc++.h>
// #include <math.h>
// using namespace std;

// struct myStack
// {   int mini =INT_MIN;
//     int *arr;
//     int cap;
//     int top;
//     int res;
//     myStack(int c){
//         cap=c;
//         arr =new int[cap];
//         top =-1;
//     }

//     void push(int x){

//     }

//     void pop(){

//     }
    
//     int getMin(){

//     }
//     int top(){
//         if(top ==-1){
//             cout <<"stack is empty" << endl;
//             return 0;
//         }
//         return arr[top];
//     };
//     int size(){
//         return (top+1);
//     };
//     void isEmpty(){
//         if(top==-1){
//             cout << "stack is empty" << endl;
//         }
//         else{
//             cout << "stack is not empty" << endl;
//         }
//     };
//     void display(){
//         for(int i =0; i <=top ;i++){
//             cout << arr[i] <<" ";
//         }
//         cout << endl;
//     };
// };


// int main(){
//     myStack s(4);
    
//     s.push(1);
//     s.push(1);
//     s.push(1);
//     s.push(1);
//     s.push(1);
//     s.display();
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.display();
//     s.pop();
//     s.push(4);
//     s.display();
//     return 0;
// }