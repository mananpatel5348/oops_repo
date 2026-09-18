#include<iostream>

#include<fstream>

using namespace std;

int main(){

    ifstream file;
    
    string text;

    file.open("student.txt");
    
    while(getline(file, text)){

    cout << text << endl ;
    }

    file.close();

    return 0;
}


