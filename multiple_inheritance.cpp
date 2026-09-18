#include<iostream>
using namespace std;

class A {
    public:
    A(){
        cout << "single inheritance" << endl;
    }
};

class B {
    public:
    B(){
        cout << "derived class c " << endl;
    }
};

class C : public A, public B {
    public:
    C(){
        cout << "multiple inheritance" << endl;
    }
};

int main() {
    C obj;
    return 0;
}