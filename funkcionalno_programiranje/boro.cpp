#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << " Unijeti  broj redova (izmeðu 1 i 100): ";
    cin >> r;

    cout << "Unijeti broj kolona (izmeðu 1 i 100)";
    cin >> c;

    cout << "Unijeti elemente prve matrice: ";

    for(i = 0; i < r; i++)
       for(j = 0; j < c; j++)
       {
           cout << "Unijeti element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    cout << "Unijeti elemente druge matrice: ";
    for(i = 0; i < r; i++)
       for(j = 0; j < c; j++)
       {
           cout << "Unijeti element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "Suma dvije matrice je: ";
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
