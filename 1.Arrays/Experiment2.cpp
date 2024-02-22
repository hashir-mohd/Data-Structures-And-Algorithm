#include <iostream>
using namespace std;
#include<limits.h>
#include<array>
#include<vector>
void removelement(vector<int>&arr,int k){
    int n =arr.size();
    for(int i=0;i<n;i++){
        if (arr[i]==k){
            if((i==n-1)&&arr[i]==k){
                arr.pop_back();
            }
            if(i!=n-1){
            vector <int> :: iterator it;
            it = arr.begin()+i;
            arr.erase(it);}
            i--;
        }
    }
    for(int i=0;i<arr.size()-1;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    vector <int> arr{1,5,5,2,5,3,5,4,5,6,5,7,5,8,5,9};   
    int remove=5;
    removelement(arr,remove);
    return 0;
}