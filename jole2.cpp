#include <iostream>
using namespace std;
class Novine
{
private:
    double dCijena;
    int brPrimjeraka;
    int brStanje;

public:
    Novine(double cijena)
    {
        dCijena = cijena;
    }
    ~Novine() { cout << "Pozvan destruktor" << endl; }
    // broj primjeraka
    void brojPrimjeraka()
    {
        int n;
        cout << "Unesi br. primjeraka->";
        cin >> n;
        brPrimjeraka = n;
    }
    void stanje()
    {
        double stanje;
        cout << "Unesi stanje->";
        cin >> stanje;
        brStanje = stanje;
    }
    bool kupovina()
    {
        if ((dCijena * brPrimjeraka) <= brStanje)
            return true;
        else
            return false;
    }
};

int main(int argc, char **argv)
{

    double jedanprim;
    cout << " Unesite cijenu->";
    cin >> jedanprim;
    Novine Primer(jedanprim);

    Primer.brojPrimjeraka();
    Primer.stanje();

    if (Primer.kupovina() == true)
        cout << "Moguca kupovina!" << endl;
    else
        cout << " Nije moguce izvrsiti kupovinu!" << endl;

    return 0;
}