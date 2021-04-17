/*
škola Gimnazija Banja Lika
predmet Programiranje
ime Matija Mirkovic
razred III7
profesor Dusko Koscica
zadatak: Parking
tekst: Potrebno je napisati kod oji ispisuje trenutno stanje automobila na parkingu i njihov polozaj na istom
kod: g++ parking.cpp -o parking
     ./parking

*/

#include <iostream>
using namespace std;

//klasa auto
class Auto
{
    //privatne varijable za naziv,brojno stanje, proizvodjaca i poziciju u sklaistu predmeta
    string tablice;
    int kolona;
    int red;

public:
    Auto(string a, int b, int c) //konstruktor Auta
    {
        tablice = a;
        red = b;
        kolona = c;
    }
    ~Auto() {} //destruktor
    //get funkcije za polja klase Auto
    int getKolona() { return kolona; }
    int getRed() { return red; }
    string getTablice() { return tablice; }
};

//klasa parking
class Parking
{
    //deklarisajne varijabli red i kolona za velicinu matrice
    int red, kolona;

public:
    Parking(int r, int k) // konstruktor
    {
        red = r;
        kolona = k;
    }
    ~Parking() {} //destruktor
    void stanje(Auto *P[], int x);
    void slika_stanja(Auto *P);
};
// metoda za listing trenutnog stanja na parkingu, za parametar se uzima niz objekata tipa Auto i broj clanova niza objekat
void Parking::stanje(Auto *P[], int x)
{
    cout << "trenutno stanje na parkingu....." << endl;
    cout << "Broj tablice"
         << "\t"
         << "Red"
         << "\t"
         << "Kolona" << endl;
    for (int i = 0; i < x; i++) //for petlja za ispis podataka o automobilima
    {
        cout << P[i]->getTablice() << "\t" << P[i]->getRed() << "\t" << P[i]->getKolona() << "\t" << endl;
    }
}

void Parking::slika_stanja(Auto *P) //ispis pozicije automobila na parkingu graficki, za parametar se uzima objekat tipa Auto
{
    cout << "Pozicija automobila sa tablicama " << P->getTablice() << " na parkingu je: " << endl;
    for (int i = 0; i < red; i++)
    {
        for (int j = 0; j < kolona; j++) //ugnjezdena for petlja
        {
            if (P->getRed() == i && P->getKolona() == j) // uslov: ako su polja objekta kolona i red jednake
                                                         //vrijednostima i i j ispisati *, a ako nisu ispisati #
            {
                cout << '*';
            }
            else
            {
                cout << '#';
            }
        }
        cout << endl;
    }
}

int main() // main funkcija
{
    Parking P(3, 3); //kreiranje objekta parking
    Auto *a[] = {new Auto("M81-T-577", 2, 1), new Auto("T11-O-554", 1, 1), new Auto("M26-J-398", 2, 2), new Auto("M26-J-398", 0, 0)};
    //kreiranje niza objekata tipa Auto
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) // for petlja u kojoj se poziva metoda objekta P slika_stanja
    {
        P.slika_stanja(a[i]);
    }
    P.stanje(a, sizeof(a) / sizeof(a[0])); //pozivaje metode stanje objekta P
    return 0;
}