#include <iostream>
using namespace std;

void del(int arr[],int size,int x){
    int i;
     for( i=0;i<size;i++){
        if(arr[i]==x){
            break;
        }
     }
     for(int j=i;j<size-1;j++){
        arr[j]=arr[j+1];
     }
   

}

void print(int arr[], int n){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5]={21,27,30,45,23};
    print(arr,5);
    cout << endl;
    del(arr,6,23);
    print(arr,5);
    
    return 0;
}