#include<iostream>
using namespace std;

class A { // base class
    public:
    A(){
        cout << "single inheritance" << endl;
    }
};

class B : public A {   // derived class
    public:
    B(){
        cout << "derived class" << endl;
    }
};

int main() {
    B obj;
    return 0;
}
