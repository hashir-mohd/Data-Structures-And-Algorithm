#include <iostream>
using namespace std;


void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping by value: a = " << a << ", b = " << b << endl;
}


void swap_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping by reference: a = " << a << ", b = " << b << endl;
}

int main() {
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    cout << "Choose the method of swapping:\n";
    cout << "1. Call by Value\n";
    cout << "2. Call by Reference\n";
    cout << "Enter your choice 1 or 2: ";
    cin >> choice;
    

    switch (choice) {
        case 1:
            swap_value(a, b);
            break;
        case 2:
            swap_reference(a, b);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
