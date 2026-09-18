#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout << "class A ka display" << endl;
    }
};

class B : public A{
    public:
    void display(){
        cout << "class B ka display" << endl;
    }
};

class C : public A, public B{
   
};

int main(){
    
    C c1;
    c1.A::display(); // calling display of class A

    c1.B::display(); // calling display of class B

    return 0;
}