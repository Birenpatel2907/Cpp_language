#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    char data[100];
    file.open("myfile.txt", ios::in);
    file >> data;
    cout << data;
}
