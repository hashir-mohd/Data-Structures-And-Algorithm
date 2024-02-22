#include <iostream>
using namespace std;

void palendrome(string str){
    string temp;
    for(int i = str.length()-1 ; i>=0 ; i--){
        temp+=str[i];
    }
    cout << str << endl << temp << endl;
    if(temp == str){
        cout << "string is palendrome" << endl;
    }
    else{
        cout << "string is not palendrome" << endl;
    }
}
 
int main(){
    string str= "abcdcba";
    palendrome(str);
    return 0;
}