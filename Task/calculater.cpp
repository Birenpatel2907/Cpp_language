#include <iostream>
using namespace std;

class Person {
    public:
        int n1,n2;
        char opp;

    public:
        void get_details() 
        {
            cout << "Enter a Number 1:  ";
            cin >> n1;
            cout << "Enter a Number 2:  ";
            cin >> n2;
            cout << "Enter a Operater:  ";
            cin >> opp;

            if(opp == '+')
            {
                cout << "Addition is: " << n1+n2 << endl;            
            }
            else if(opp == '-')
            {
                cout << "Subtraction is: " << n1-n2 << endl;
            }
             else if(opp == '*')
            {
                cout << "Multiplication is: " << n1*n2 << endl;
            }
             else if(opp == '/')
            {
                cout << "Division is: " << n1/n2 << endl;
            }
            else
            {
                cout << "Enter a Valid Oparator!!!";
            }
        }
};    

int main() 
{
    // object of Person
    Person p;

    p.get_details();

      return 0;
}
