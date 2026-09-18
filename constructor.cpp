#include<iostream>
using namespace std;

// constructor :- it is a function ehich has same name as class name 
// and it automatically gets called when you create instance of class
// basically at the initiallization phase.
// it allocates the memory 

class Bank{
    int balance;

    public:
    Bank(){
        cout << "Hello world" << endl;
    }

    void getter(){
        cout << "Balance :-" << balance << endl;
    }

    void setter(int a){
        if (a < 0)
        {
            cout << " balance can not be in minus" << endl;
            return;
        }
        balance = a;
    }

};
int main()
{
    Bank b1;
    Bank b2;

    return 0;
}

