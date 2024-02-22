#include <stdio.h>
using namespace std;
int evensum(int arr[],int n);

int main(){
   int arr[]={1,2,3,4,5};
   printf("%d",(arr,5));

}
int evensum(int arr[],int n){
  int i=0,sum=0;
  if(i==n){
    return sum;
  }
  if(arr[i]%2==0){
    sum+=arr[i];
  }
  evensum(arr+1,5);

}