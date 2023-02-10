#include <iostream>
using namespace std;

int main()
{
    int vowel,con,space,digit,num;
    vowel = con = space = digit = 0;
    char sentence[] = "my1 name2 is3 biren";
    num = sizeof(sentence)-1;

    for(int i=0; i<num; i++)
    {
        if(sentence[i]=='a' || sentence[i]=='A' || sentence[i]=='e' || sentence[i]=='E' || sentence[i]=='i' || sentence[i]=='I' || sentence[i]=='o' || sentence[i]=='O' || sentence[i]=='u' || sentence[i]=='U')
        {
            vowel++;
        }
        else if(sentence[i] == ' ')
        {
            space++;
        }
        else if(sentence[i]>='0' && sentence[i]<='9')
        {
            digit++;
        }
        else
        {
            con++;
        }
    }
        cout << "vowel : " << vowel << endl;
        cout << "consonate : " << con << endl;
        cout << "white space : " << space << endl;
        cout << "Digit : " << digit << endl;
}