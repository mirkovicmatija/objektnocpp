#include <iostream>
using namespace std;

class Vozac
{
private:
    string tim;
    string ime;
    int pobjede;
    int broj_sezona;

public:
    Vozac() {}
    Vozac(string a, int b, int c);
    Vozac(string a, string b, int c, int d);

    ~Vozac() { cout << "Pozvan Destruktor" << endl; }

    int getPobjede() { return pobjede; }
    void setPobjede(int a) { pobjede = a; }

    string getTim() { return tim; }
    void setTim(string a);

    void Profil();
    int NovaSezona() { return broj_sezona + 1; }
};

Vozac::Vozac(string a, int b, int c)
{
    tim = a;
    pobjede = b;
    broj_sezona = c;
}

Vozac::Vozac(string a, string b, int c, int d)
{
    tim = a;
    ime = b;
    broj_sezona = c;
    pobjede = d;
}

void Vozac::setTim(string a)
{
    if (a == "")
    {
        tim = "nema tim";
    }
    else
    {
        tim = a;
    }
}

void Vozac::Profil()
{
    cout << "ime : " << ime << endl;
    cout << "tim : " << tim << endl;
    cout << "Broj sezona : " << broj_sezona << endl;
    cout << "Broj Pobjeda : " << pobjede << endl;
}

int main()
{
    Vozac Ham("Mercedes", 91, 14);
    Vozac Cetiri("McLaren", "Lando Norris", 0, 2);
    Vozac Sedam;
    Ham.Profil();
    cout << "Broj pobjeda LH : " << Ham.getPobjede() << endl;
    Sedam.setTim("Alfa Romeo");
    cout << endl;
    Sedam.Profil();
    Cetiri.setTim("");
    Cetiri.Profil();
    cout << endl;
    cout << "Vozac 4 vozi " << Cetiri.NovaSezona() << "  sezone\n";
    cout << endl;
    Cetiri.Profil();
    return 0;
}