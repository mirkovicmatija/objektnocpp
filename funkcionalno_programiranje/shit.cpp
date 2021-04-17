#include <iostream>
using namespace std;
#define MAX 10
int main()
{
    int n;
    cin >> n;
    int nMatrica[MAX][MAX];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)

            nMatrica[i][j] = i % 2 ? j : i;
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)

            cout << nMatrica[i][j];
    }
    cout << endl;

    return 0;
}