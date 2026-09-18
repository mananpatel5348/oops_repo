#include<iostream>
using namespace std;
class A {
    public:
    A(){
        cout << "single inheritance" << endl;
    }
};

class B : public A {
    public:
    B(){
        cout << "class B" << endl;
    }
};

class C : public A {
    public:
    C(){
        cout << "class C" << endl;
    }
};

class D : public B, public C {
    public:
    D(){
        cout << "hybrid inheritance" << endl;
    }
};

int main() {
    D obj;
    return 0;
}