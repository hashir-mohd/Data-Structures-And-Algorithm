#include <iostream>
using namespace std;

class MyValue {
    int val;

public:
    MyValue(int initial_val = 0) {
        val = initial_val;
    }

    void update_val() {
        cout << "Enter a new value: ";
        cin >> val;
    }

    void get_val() const {
        cout << "Current value: " << val << endl;
    }
};

int main() {
    MyValue obj(10); // Start with an initial value of 10

    obj.get_val();
    obj.update_val();
    obj.get_val();

    return 0;
}
