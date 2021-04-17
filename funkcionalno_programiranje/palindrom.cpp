#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char cPalindrom[] = "teret";
    char* ptr = cPalindrom; 
    const int iPalindromDuzina = sizeof(cPalindrom)/sizeof(char) - 1;

    char cPalindromUnazad[ iPalindromDuzina ];
    for (int i = iPalindromDuzina; i >= 0; i--)
    {
        cPalindromUnazad[iPalindromDuzina - i - 1] = cPalindromUnazad[i];
    }

    cout << cPalindrom << endl << cPalindromUnazad << endl;

    return 0;
}