#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void array_union(int a[],int b[],int m,int n){
    int i=0,j=0;
    
    while (i<m && j<n)
    {
        
        if(i>0 && a[i]==a[i-1]){i++;continue;}
        if(j>0 && b[j]==b[j-1]){j++;continue;}
        if(a[i]<b[j]){cout << a[i] << " "; i++;}
        else if(a[i]>b[j]){cout << b[j] << " "; j++;}
        else{cout << a[i] << " "; i++;j++;}
    }
    while(i<m){
        if(i==0 || a[i]!=a[i-1]){cout << a[i] << " ";}
             i++;
    }
    while(j<n){
        if(j==0 || b[j]!=b[j-1]){cout << b[j] << " "; }
            j++;
    }
}

int main(){
    int a[7]={2,20,20,40,60,70,70}; 
    int b[5]={10,20,20,80,80};
    int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
    array_union(a,b,m,n);
   
}
