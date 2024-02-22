#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void reverse(char str[], int low, int high){
    while(low <=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

void reverseWords(char str[],int n){
    int start =0;
    for(int end =0; end<n; end++){
        if (str[end]==' '){
            reverse(str,start,end-1);
            start = end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}



int main(){
    char str[]= "my name is hashir";
    int n = sizeof(str)-1;
    reverseWords(str,n);
    cout << str << endl;
    
    return 0;
}