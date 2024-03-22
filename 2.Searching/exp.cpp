#include <iostream>
using namespace std;

void binary(string s,int b){
    if(b==0) return;
    
    cout << s[b-1];
    binary(s,b-1);
}

int main(){
    string a= "abcde";
    binary(a,5);
    return 0;
}