#include <iostream>
using namespace std;

int main() {

    // location= &
    int a=10;
    int *address= &a;
    //or *address=0;
    //  address=&a;
   
    

    // value at location is *
    // (*address)++;
    // a++;
    // cout << address<< endl;
    // cout << *address << endl;
    // cout << &a<< endl;
    // cout << a<< endl;
    // cout << sizeof(address) << endl;

    //copying a pointer
    // int *p= address;
    // cout <<address << "-" << p << endl;
    // cout <<*address << "-" << *p << endl;

    //pointer arithmatic
    // cout << address << endl;
    // *address++; // changes the address(address=address+1)
    // cout << address << endl;
    // (*address)++; // changes the value at address
    // cout << *address << endl;
    // cout << address << endl;
    // address++;
    // cout << address << endl;


    //ARRAY POINTER
    int arr[10]={1,2};
    // cout << &arr << endl;
    // cout << *arr << endl;
    //arr[i]==*(arr+i)==i[arr]
    
}