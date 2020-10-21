#include <iostream>
using namespace std;

class Majstor
{
protected:
    string cijenaServisa;
    string ime;
    string mobilniBroj;

public:
    Majstor(string a, string b, string c)
    {
        cijenaServisa = a;
        ime = b;
        mobilniBroj = c;
    }
    ~Majstor(){};

    void setIme(string a) { ime = a; }
    string getBroj() { return mobilniBroj; }

    virtual void Popravi() { cout << "Popravljam Stolicu" << endl; }
    virtual void Napravi() { cout << "Pravim Regale" << cijenaServisa << endl; }
    virtual void Profil()
    {
        cout << "ime : " << ime << endl;
        cout << "Cijena Servisa : " << cijenaServisa << endl;
        cout << "Mobilni: " << mobilniBroj << endl;
    }
};

class Elektricar : public Majstor
{

    bool radSaVisokimNaponom;

public:
    Elektricar(string a, string b, string c, bool d) : Majstor(a, b, c)
    {
        radSaVisokimNaponom = d;
    };

    ~Elektricar(){};

    void Popravi() { cout << "Popravljam TV" << endl; }
    void Napravi() { cout << "Pravim Zvono za " << cijenaServisa << endl; }
    void Zalemi() { cout << "Lemim kabel" << endl; }
    void Profil()
    {
        cout << "ime : " << ime << endl;
        cout << "Cijena Servisa : " << cijenaServisa << endl;
        cout << "Mobilni: " << mobilniBroj << endl;
        cout << "Rad sa visokim naponom: " << radSaVisokimNaponom << endl;
    }
};

int main()
{
    Majstor Majstor("100KM", "Mica", "065123456");
    Elektricar Elektricar("200KM", "Rade", "065789123", true);
    Elektricar.Profil();
    cout << endl;
    Elektricar.setIme("Mare");
    Majstor.Profil();
    cout << endl;
    Elektricar.Profil();
    cout << endl;
    Majstor.setIme("Goci");
    cout << endl;
    cout << endl;
    Majstor.Popravi();
    cout << endl;
    Elektricar.Popravi();
    cout << endl;
    Elektricar.Zalemi();
    return 0;
}