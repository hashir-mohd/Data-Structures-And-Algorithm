#include <iostream>
using namespace std;

class FriendFunc2; // forward declaration

class FriendFunc1 {
private:
    int num1, num2;

public:
    FriendFunc1(int a, int b){
        num1 = a;
        num2 = b;
    }

    friend float calculateAverage(FriendFunc1 obj1, FriendFunc2 obj2);//friend function declaration
};

class FriendFunc2 {
private:
    int num3, num4, num5;

public:
    FriendFunc2(int c, int d, int e){
        num3 = c;
        num4 = d;
        num5 = e;
    }

    friend float calculateAverage(FriendFunc1 obj1, FriendFunc2 obj2);//friend function declaration
};
//declaration of friend function
float calculateAverage(FriendFunc1 obj1, FriendFunc2 obj2) {
    int sum = obj1.num1 + obj1.num2 + obj2.num3 + obj2.num4 + obj2.num5;
    return sum / 5;
}

int main() {
    int a, b, c, d, e;
    cout << "Enter five different numbers: ";
    cin >> a >> b >> c >> d >> e;

    FriendFunc1 obj1(a, b);
    FriendFunc2 obj2(c, d, e);

    float avg = calculateAverage(obj1, obj2);
    cout << "The average of the five numbers is: " << avg << endl;

    return 0;
}
