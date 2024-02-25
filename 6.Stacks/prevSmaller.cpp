#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int* prevSmaller(int* A, int n1, int *len1) {
    stack <int> st;
    int res[n1]={-1};
    for(int i=0 ;i<n1 ;i++) {
        while(!st.empty() && st.top()>=A[i] ){
            st.top();
        }
        if(!st.empty()){
            res[i]=st.top();
        };
        st.push(A[i]);
    }
    return res;
}
