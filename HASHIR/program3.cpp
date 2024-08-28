#include <iostream>
using namespace std;

class M1 {
private:
    int value;
public:
    M1() {
        value = 0;
        cout<<value<<endl;
    }
    M1(int a) {
        value = a;
        cout << value<< endl;
    }

    M1(const M1 &obj) {
        value = obj.value;
        cout << value << endl;
    }
};

int main() {
    M1 obj1;

    M1 obj2(42);

    M1 obj3(obj2);

    return 0;
}
