#include <iostream>
using namespace std;


void merge_two_sorted_array(int arr[],int n,int arr2[],int m){
    int i=0,j=0;
    while(i<n &&j<m){
        if(arr[i]<=arr2[j]){
            cout << arr[i]<<" "; i++;
        }
        else{
            cout << arr2[j]<<" "; j++;};
        
        
    }
    while(i<n){
        cout<< arr[i]<<" ";
        i++;
    }
    while(j<m){
        cout << arr2[j]<<" ";
        j++;
    }

}

int main(){
    int arr[7]={5,7,10,17,22,28,35};
    int arr2[5]={2,9,17,40,55};
   
    merge_two_sorted_array(arr,7,arr2,5);
}