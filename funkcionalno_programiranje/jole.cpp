#include <iostream>

using namespace std;

class cObjekt
{

    int n;
    int suma = 0;
    int nNiz[100];

public:
    cObjekt(int dN) { n = dN; }
    ~cObjekt() { cout << "Pozvan destrutor" << endl; }
    float dAritmetikca() { return suma / n; }
    void unesiNiz()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Sljedeci element->";
            cin >> nNiz[i];
            suma += nNiz[i];
        }
    }
};

int main(int argc, char **argv)
{
    cObjekt sta(5);
    cout << "Unesite niz!" << endl;
    sta.unesiNiz();
    cout << "Aritmeticka sredina je->" << sta.dAritmetikca() << endl;
    return 0;
}