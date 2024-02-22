#include <iostream>

using namespace std;


void patternDistinct(string text, string pattern){
    int n =text.length();
    int m =pattern.length();
       for(int i =0 ;i <=n-m; i++){
        int j;
        for(j=0 ; j<m ;j++){
            if(pattern[j]!=text[i+j]){
                break;
            }
        }
        // if(j==0){
        //     i++;
        // }
        if(j==m){
            cout << i << "  " ;
        }
        else{
            i=i+j;
        }
       }
}   


int main(){
    string text = "abababacdab";
    string pattern ="ab";
    patternDistinct(text,pattern);
    return 0;
}