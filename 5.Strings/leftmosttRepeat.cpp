#include <iostream>
using namespace std;

int leftmostRepeat(string str){
    int CHAR = 256;
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res= -1;
    for(int i=str.length()-1;i >=0;i--){
        if(visited[str[i]]){
            res=i;
        }
        else{
            visited[str[i]]=true;
        }
    }   
    return res;
}

int main(){
    string str= "abcdedbc";
    cout << leftmostRepeat(str) << endl;
    return 0;
}