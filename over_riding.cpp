// over - riding :- same name , same parameter but diffrent class.

// over - loading :- same function name , diffrent parameter

#include <iostream>
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

int main(){
    
    A a;
    a.display();

    cout << endl;

    B b;
    b.display();

    return 0;
}