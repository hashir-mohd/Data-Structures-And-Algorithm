#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function to enable method overriding
    virtual void sound() {
        cout << "This is a generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding the sound method for Dog
    void sound() override {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the sound method for Cat
    void sound() override {
        cout << "Cat meows!" << endl;
    }
};

int main() {
    
    Dog dog;
    Cat cat;

    
    dog.sound();
    cat.sound();

    return 0;
}
