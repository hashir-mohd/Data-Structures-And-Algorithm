#include <iostream>
using namespace std;

void array_intersection(int arr[],int m,int arr2[],int n){
    int i=0,j=0;
    while (i<m && j<n)
    {
        if (i>0 && arr[i]==arr[i-1])
        {   
            i++;
            continue;
        }
        
        if (arr[i]==arr2[j])
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
        if (arr[i]<arr2[j])
        {
            i++;
        }
        if (arr[i]>arr2[j])
        {
            j++;
        }
        
        
    }
    


    
}
int main(){
    int arr[7]={1,20,20,40,60,70,70}; 
    int arr2[5]={10,20,20,60,70};
    array_intersection(arr,7,arr2,5);
   
}