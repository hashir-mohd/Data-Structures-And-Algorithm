#include <iostream>
using namespace std;

void subsequence(string str1,string str2){
    int m = str1.length();
    int n = str2.length();
    int j =0;
    for( int i = 0 ; i<m && j<n;i++){
        if(str2[j]==str1[i]){
            j++;
        }
    }
    if(j==n){
       cout << "yes"<< endl;
    }
    else{
        cout << "no" << endl;
    }

}
 
int main(){
    string str1= "abcdca";
    string str2 = "cdb";
    subsequence(str1,str2);
    return 0;
}