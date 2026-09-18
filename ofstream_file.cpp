#include<iostream>

#include<fstream>

using namespace std;

int main(){

    ofstream file;

    file.open("student.txt");

    file << "welcome to a new file" << endl;

    file.close();

    return 0;
}
