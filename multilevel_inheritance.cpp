#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "single inheritance" << endl;
    }
};

class B : public A{
    public:
    B(){
        cout << "class B" << endl;
    }
};

class C : public B{
    public:
    C(){
        cout << "class C" << endl;
    }
};

int main() {
    C obj;
    return 0;
}