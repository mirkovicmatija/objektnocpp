#include <iostream>
using namespace std;

class Majstor
{
protected:
    int cijenaServisa;
    string ime;
    string mobilniBroj;

public:
    Majstor(int a, string b, string c)
    {
        cijenaServisa = a;
        ime = b;
        mobilniBroj = c;
    }
    ~Majstor(){};

    void setIme(string a) { ime = a; }
    string getBroj() { return mobilniBroj; }
    string getIme() { return ime; }

    virtual void Popravi() { cout << "Popravljam Stolicu" << endl; }
    virtual void Napravi() { cout << "Pravim Regale" << cijenaServisa << endl; }
    void Preskup(int budzet)
    {
        if (budzet >= cijenaServisa)
        {
            cout << "Imate dovoljno novca za servis" << endl;
        }
        else
        {
            cout << "Nemate dovoljno novca za servis" << endl;
        }
    }
    virtual void Profil()
    {
        cout << "ime : " << ime << endl;
        cout << "Cijena Servisa : " << cijenaServisa << endl;
        cout << "Mobilni: " << mobilniBroj << endl;
    }
};

class Elektricar : public Majstor
{
private:
    bool radSaVisokimNaponom;

public:
    Elektricar(int a, string b, string c, bool d) : Majstor(a, b, c)
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
    Majstor Majstor(100, "Mica", "065123456");
    Elektricar Elektricar(200, "Rade", "065789123", true);
    int izbor;
    do
    {
        switch (izbor)
        {
        case 1:
            Elektricar.Profil();
            break;
        case 2:
            Majstor.Profil();
            break;
        default:
            break;
        }
    } while (izbor < 4);
}