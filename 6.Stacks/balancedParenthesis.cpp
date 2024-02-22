#include <iostream>
#include <stack>
using namespace std;

bool balancedParanthesis(string s){
    stack <char> st;
        for(int i =0 ; i< s.length() ;i++){
            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                st.push(s[i]); 
            }
            else{
                if(st.empty()) return false;
                if(s[i]==']' && st.top()=='['){st.pop();}
                else if(s[i]=='}' && st.top()=='{'){st.pop();}
                else if(s[i]==')' && st.top()=='('){st.pop();}
                else{ return false;}
            }
        }
        if(st.empty())
        return true;
        else return false;
}
// 


int main(){
    string s ="()([{}]){}{}";
    cout <<balancedParanthesis(s) <<endl;
    return 0;
}