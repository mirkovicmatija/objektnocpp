#include <iostream>
using namespace std;

class Vozilo
{
protected:
    string marka;
    int cijena;
    string model;

public:
    Vozilo(string a, string b, int c)
    {
        marka = a;
        model = b;
        cijena = c;
    }
    ~Vozilo(){};
    virtual void Informacije()
    {
        cout << "marka : " << marka << endl;
        cout << "model : " << model << endl;
        cout << "cijena = " << cijena << endl;
    }
};

class Auto : public Vozilo
{
private:
    bool motor;

public:
    Auto(string a, string b, int c, bool d) : Vozilo(a, b, c)
    {
        motor = d;
    };

    ~Auto(){};
    void Informacije()
    {
        cout << "marka : " << marka << endl;
        cout << "model : " << model << endl;
        cout << "cijena = " << cijena << endl;
        cout << " motor" << motor << endl;
    }
};
class Biciklo : public Vozilo
{
private:
    int brzine;

public:
    Biciklo(string a, string b, int c, int d) : Vozilo(a, b, c)
    {
        brzine = d;
    };

    ~Biciklo(){};
    void Informacije()
    {
        cout << "marka : " << marka << endl;
        cout << "model : " << model << endl;
        cout << "cijena = " << cijena << endl;
        cout << " brzine" << brzine << endl;
    }
};

int main()
{
    Auto Auto("BMW", "Mustang", 100000, true);
    Biciklo Biciklo("Alpina", "Mountain Bike", 400, 21);
    Biciklo.Informacije();
    Auto.Informacije();
    return 0;
}