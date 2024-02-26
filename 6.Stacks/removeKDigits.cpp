#include<iostream>
using namespace std;
#include<stack>
#include<vector>

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack <char> st;
        stack <char> st2;
        string res;
        for(int i =0;i <num.length(); i++){
            while(!st.empty() && st.top()>num[i]&& k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        while(!st2.empty()){
            if(st2.top()=='0') st2.pop();
            else if(st2.top()!= '0') break;
        }
        if(st2.empty()) return"0";
        while(!st2.empty()){
            res+=st2.top();
            st2.pop();
        }
        return res;
    }
};
