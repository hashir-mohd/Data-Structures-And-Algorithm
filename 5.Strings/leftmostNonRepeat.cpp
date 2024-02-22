#include <iostream>
#include <limits.h>
using namespace std;

int leftmostNonRepeat(string str){
    int CHAR = 256;
    int fI[CHAR];
    fill(fI,fI+CHAR,-1);
    for(int i=0;i<str.length(); i++){
        if(fI[str[i]]== -1){
            fI[str[i]]=i;
        }
        else{
            fI[str[i]]=-2;
        }
    }
    int res= INT_MAX;
    for(int i =0; i < CHAR; i++){
        if(fI[i]>=0){
            res= min(res,fI[i]);
        }
    }
    if(res==INT_MAX) return -1;
    else{
        return res;
    }
    

}


int main(){
    string str= "abcdea";
    cout << leftmostNonRepeat(str) << endl;
    return 0;
}