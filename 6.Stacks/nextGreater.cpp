#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int>ans(n,-1);
        stack<int>st;

        // finding the next greater element of each element of nums2;
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && nums2[st.top()]<nums2[i]) st.pop();
            if(st.size()>0) ans[i] = nums2[st.top()];
            st.push(i);
        }

        // storing each next greater element into the map
        unordered_map<int,int>mpp;
        for(int i = 0; i<nums2.size(); i++) mpp[nums2[i]] = ans[i];

        // creating the final ans;
        vector<int>final(nums1.size(), -1);
        for(int i = 0; i<nums1.size(); i++){
            if(mpp.find(nums1[i]) != mpp.end()){
                final[i] = mpp[nums1[i]];
            }
        }

        return final;
    }
};