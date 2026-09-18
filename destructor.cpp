#include <iostream>
using namespace std;

// constructor :- it is a function ehich has same name as class name 
// and it automatically gets called when you create instance of class
// basically at the initiallization phase.
// it allocates the memory 

// destructor :- it is a function .
// it is automatically gets calles when the obj gets out the scope .
// it frees the memory.

class Abc{
    public:

    Abc(){
        cout << "Constructor called" << endl;
    }

    ~Abc(){
        cout << "Destructor called " << endl;
    }
};

int main()
{
    Abc a1;
    cout << "something" << endl;
    cout << "somryhing 2" << endl;

    return 0;

}