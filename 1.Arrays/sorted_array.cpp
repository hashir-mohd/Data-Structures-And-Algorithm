#include <iostream>
using namespace std;
#include<math.h>

int sorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if (arr[i+1]<arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[]={1,2,3};
    int size= sizeof(arr)/sizeof(int);
    cout << "1 is for not sorted and 0 is for sorted : " << endl << sorted(arr, size) << endl;   
    return 0;
}