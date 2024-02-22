#include <iostream>
using namespace std;
#include <stack>


int prec(char c){
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}


void infixToPostfix(string s){
    stack <char> st;
    for(int i =0;i<s.length(); i++){
        char c=s[i];
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
            cout << c ;
            continue;
        }
        else if(c=='('){
            st.push('(');
        }
        else if(c==')'){
            while(st.top() !='('){
                cout << st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(s[i]) <= prec(st.top())){
                cout <<st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
    cout <<st.top();
    st.pop();
  }
}
// prec(st.top())<=prec(s[i])

int main() {
    string s="(p+q)*(m-n)";
    infixToPostfix(s);

    return 0;
}
