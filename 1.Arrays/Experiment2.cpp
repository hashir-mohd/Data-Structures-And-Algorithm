#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int func1(int a, int b){
    return a+b;
}

string func1(string a, string b){
    return a+b;
}

int main() {
    cout << func1("a","b")<<endl;
    cout << func1(1,2)<<endl;

}
