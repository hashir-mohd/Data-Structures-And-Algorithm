#include <iostream>
using namespace std;

void printFreq(string str){
    int count[26]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;
    };
    for(int i=0 ; i<26 ; i++){
        if(count[i]>0){
            cout << char(i+'a') << " - "<< count[i] << endl;
        }
    };
}

int main(){
    string str= "anklanksdas";
    printFreq(str);
    return 0;
}