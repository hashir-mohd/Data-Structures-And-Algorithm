#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString(string s = "") : str(s) {}

    MyString(const MyString& other) : str(other.str) {}

    MyString& operator=(const MyString& other) {
        if (this != &other) {
            str = other.str;
        }
        return *this;
    }

    bool operator==(const MyString& other) {
        return str == other.str;
    }

    MyString operator+(const MyString& other) {
        return MyString(str + other.str);
    }

    void display() {
        cout << str;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("World!");

    MyString str3;
    str3 = str1;
    cout << "After copy: ";
    str3.display();
    cout << endl;

    if (str1 == str2) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    MyString str4 = str1 + str2;
    cout << "Concatenated string: ";
    str4.display();
    cout << endl;

    return 0;
}
