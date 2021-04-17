#include <iostream>
#include <cmath>
using namespace std;

class Krug
{
private:
    int r;

public:
    Krug(int x) { r = x; }
    ~Krug() {}
    int getR() { return r; }
    void setR(int x) { r = x; }
    double Obim() { return r * 2 * 3.14; }
    double Povrsina() { return r * r * 3.14; }
    double Obim(int x) { return x * 2 * 3.14; }
    double Povrsina(int x) { return x * x * 3.14; }
    void Provjera();
    void Povecanje();
};

void Krug::Provjera()
{
    if (r < 0)
    {
        cout << "Poluprecnik ne moze biti manji od nule molimo vas da unesete ponovo" << endl;
    }
    else if (r == 0)
    {
        cout << "Poluprecnik je 0" << endl;
    }
    else
    {
        cout << "Poluprecnik je veci od nula" << endl;
    }
}

void Krug::Povecanje()
{
    int n;
    cout << "Do kojeg broja zelite da povecate poluprecnik";
    cin >> n;
    cout << "Pocetni poluprecnik je " << r << "obim je " << Obim() << "a povrsina je " << Povrsina() << endl;
    for (int i = r; i <= n; i++)
    {
        cout << "Ako je poluprecnik " << i << " onda se obim poveca za " << Obim(i) - Obim() << " a povrsina se poveca za " << Povrsina(i) - Povrsina() << endl;
    }
}

int main()
{
    Krug K(0);
    int izbor, precnik;
    cout << "Unesite poluprecnik vaseg kruga" << endl;
    cin >> precnik;
    K.setR(precnik);

    do
    {

        cout << "\n1:Obim Kruga\n2:Povrsina kruga\n3:Provjera poluprecnika\n4:Povecanje precnika\n5:Promjeni poluprecnik\n6:ispisi precnik\n7: Izlaz" << endl;
        cout << "Unesite vas izbor->";
        cin >> izbor;
        switch (izbor)
        {
        case 1:
            cout << "Obim je:" << K.Obim() << endl;
            break;
        case 2:
            cout << "Precnik je:" << K.Povrsina() << endl;
            break;
        case 3:
            K.Provjera();
            break;
        case 4:
            K.Povecanje();
            break;
        case 5:
            cout << "Unesite poluprecnik vaseg kruga" << endl;
            cin >> precnik;
            K.setR(precnik);
            break;
        case 6:
            cout << K.getR() << endl;
            break;
        case 7:
            cout << "Izasli ste iz programa \n";
            break;
        default:
            cout << "Pogresan izbor!!" << endl;
            break;
        }
    } while (izbor < 7);
    return 0;
}