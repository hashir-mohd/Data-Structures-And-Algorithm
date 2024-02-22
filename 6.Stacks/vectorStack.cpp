#include <iostream>
#include <vector>
using namespace std;

struct myStack
{
    vector <int> v;

    void push(int x){
        v.push_back(x);
    }

    int pop(){
        int res=v.back();
        v.pop_back();
        return res;
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
    void display(){
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " " ;
        }
        cout << endl ;
    }
};


int main(){
    myStack s;
    s.push(1);
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    // s.push(4);
    s.display();
    cout << s.size() << endl;
    return 0;
}