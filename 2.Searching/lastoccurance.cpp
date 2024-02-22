#include <iostream>
using namespace std;

int binary(int arr[],int n,int key){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<key)
            low=mid+1;
        else if(arr[mid]>key)
            high=mid -1;
        else
            if(mid ==n-1 || arr[mid+1]!=arr[mid])
                return mid;
            else  
                low =mid+1;
    }
    return -1;
}

int main(){
    int arr[]={1,5,5,5,5,6,7,8,9,9,9,9};
    int size=sizeof(arr)/sizeof(int);
    int key=9;
    int x= binary(arr,size,key);
    cout << x << endl;
    return 0;
}