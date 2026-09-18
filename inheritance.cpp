#include<iostream>
using namespace std;
class gameObj{
    public:
    void vehicle(){
        cout << "can be used on both attack and defence";
    }

    void invisibility(){
        cout << "can be use on both attack and gefence"; 
    }
};

class attackObj : public gameObj{
    public:
    void granade (){
        cout << "granade does y damage depending on x distance" << endl;
    }

    void gun(){
        cout << "gun does y damage depending on x bullets" << endl;
    }
};

class defenceObj : public gameObj{
    public:
    void jacket(){
        cout << "level X protect Y no of bullets" << endl;
    }

    void helmet(){
        cout << "level X protect Y no of bullets" << endl;
    }
};

int main()
{
    attackObj a1;
    a1.vehicle();

    return 0;
}