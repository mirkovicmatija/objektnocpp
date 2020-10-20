#include <iostream>
using namespace std;

class Majstor
{
protected:
    string cijenaServisa;
    string ime;
    string mobilniBroj;

public:
    Majstor() {}
    Majstor(string a, string b, string c)
    {
        cijenaServisa = a;
        ime = b;
        mobilniBroj = c;
    }
    ~Majstor(){};

    void setIme(string a) { ime = a; }
    string getBroj() { return mobilniBroj; }

    void Popravi() { cout << "Popravljam Stolicu" << endl; }
    void Napravi() { cout << "Pravim Regale" << cijenaServisa << endl; }
    void Profil()
    {
        cout << "ime : " << ime << endl;
        cout << "Cijena Servisa : " << cijenaServisa << endl;
        cout << "Mobilni: " << mobilniBroj << endl;
    }
};

class Elektricar : public Majstor
{

public:
    Elektricar(){};
    Elektricar(string a, string b, string c)
    {
        cijenaServisa = a;
        ime = b;
        mobilniBroj = c;
    };
    ~Elektricar(){};

    void Popravi() { cout << "Popravljam TV" << endl; }
    void Napravi() { cout << "Pravim Zvono za" << cijenaServisa << endl; }
    void Zalemi() { cout << "Lemim kabel" << endl; }
};

int main()
{
    Majstor Majstor("100", "Mica", "065123456");
    Elektricar Elektricar;
    Majstor.Profil();
    Elektricar.setIme("Mare");
    Elektricar.Profil();
    Majstor.Popravi();
    Elektricar.Napravi();
    Elektricar.Zalemi();
    return 0;
}