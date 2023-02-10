#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    char data[100] = "helloword!!";
    file.open("myfile.txt", ios::out);
    file << data;

}