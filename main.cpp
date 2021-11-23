#include <iostream>
#include <string>
using namespace std;

string DOPISZ(char litera, string napis)
{
    return napis + litera;
}
string ZMIEN(char litera, string napis)
{
    napis = napis.substr(0, napis.size()-1);
    return napis + litera;
}
string USUN(char litera, string napis)
{
    napis = napis.substr(0, napis.size()-1);
    return napis;
}
string PRZESUN(char litera, string napis)
{
    int napisLength = napis.length();
    for(int i = 0; i < napisLength;i++)
    {
        if(napis[i] == litera)
        {
            if(napis[i] != 'Z')
            {
                 napis[i]++;
            }
            else
            {
                napis[i] = 'A';
            }
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
