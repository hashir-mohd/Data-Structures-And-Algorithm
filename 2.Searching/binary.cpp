#include <iostream>
using namespace std;

int binary(int arr[],int n,int key){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;}
        else if(arr[mid]>key){
            high=mid -1;}
        else{
            low=mid+1;}
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int);
    int key=6;
    int x= binary(arr,size,key);
    cout << x << endl;
    return 0;
}