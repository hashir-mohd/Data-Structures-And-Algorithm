#include<iostream>
using namespace std;
#include<stack>
#include<vector>
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        while(!asteroids.empty()){
            int currAst=asteroids.back();
            asteroids.pop_back();
            while(!st.empty() && currAst*st.top()<0){
                if(abs(currAst)>abs(st.top())){
                    st.pop();
                }
                else if(abs(currAst)<abs(st.top())){
                    currAst=st.top();
                    st.pop();
                }
            }
            if(currAst-st.top()==0){
                st.pop();
            }
            st.push(currAst);
        }
        asteroids.resize(st.size());
        while(!st.empty()){
            asteroids.push_back(st.top());
            st.pop();
        }
        return asteroids;
    }
};