#include <iostream>

using namespace std;


void patternNaive(string text, string pattern){
    for(int i =0; i <= text.length()-pattern.length(); i++){
        bool flag = true;
        for(int j=0 ; j< pattern.length(); j++ ){
            if(pattern[j]!= text[i+j]){
                flag =false;
                break;
            }
        }
        if(flag == true){
            cout << i << "  " ;
        }
    }    
}   


int main(){
    string text = "abababacdab";
    string pattern ="ab";
    patternNaive(text,pattern);
    return 0;
}