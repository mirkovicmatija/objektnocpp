/*
škola Gimnazija Banja Lika
predmet Programiranje
ime Matija Mirkovic
razred III7
profesor Dusko Koscica
zadatak: Sistem jednacina
tekst: Potrebno je napisati kod koji racuna sistem jednacina sa jednom ili dvije nepoznate i kod koristi nasljedjivanje 
kod: g++ jednacina.cpp -o jednacina
     ./jednacina

*/

#include <iostream>
using namespace std;

class JednaNepoznata //klasa jedna nepoznata
{
protected: // zasticene varijable a,b tipa double koji su koeficjenti u jednacini sa jednom nepoznatom
    double a, b;

public:
    JednaNepoznata(double dA, double dB) //konstruktor
    {
        a = dA;
        b = dB;
    }
    ~JednaNepoznata() {}     //Destruktor
    virtual void resavanje() // metoda koja resava sistem jednacina, nema parametara
    {
        if (a != 0) // Uslov Ako je broj razlicit od nule rjesenje ima vrijednost -b/a, ako je b nula ona ima beskonacno rjesenja
                    //a ako be nije nula sistem je nemoguc
            cout << "Rjesenje je x=" << -b / a;
        else if (b == 0)
            cout << "Beskonacno rjesenja" << endl;
        else
            cout << "Nemoguce!" << endl;
    }
};
class DveNepoznate : public JednaNepoznata //klasa dvenepoznate koja je nasljedejna od klase jednanepoznata
{
    // privatne varijable c,d,e,f koje su tipa double i predstavljaju koeficjente sistema
    double c, d, e, f;
    double Det, Dx, Dy; // varijable koje predstavljaju rezultate determinante drugog reda

public:
    DveNepoznate(double dA, double dB, double dC, double dD, double dE, double dF) : JednaNepoznata(dA, dB) //nasljedjeni konstruktor
    {
        c = dC;
        d = dD;
        e = dE;
        f = dF;
    }
    ~DveNepoznate() {} //destruktor
    double determinanta(double dA, double dB, double dC, double dD) { return dA * dD - dB * dC; }
    // metoda tipa double koja za parameterte uzima 4 broja i vraca rezultat determinante

    void resavanje() // funkcija za resavanje sistema jednacina drugog reda
    {
        Det = determinanta(a, b, c, d); // pozivanje metode determinanta
        Dx = determinanta(e, f, c, d);
        Dy = determinanta(a, b, e, f);

        if (Det != 0) //ako je determinanta Det razlicita od nule zadatak ima rjesenje
        {
            cout << "Rjesenje je x=" << Dx / Det << " y = " << Dy / Det;
        }
        else
        {
            if (Dx == 0 && Dy == 0) //ako su Dx i Dy nula onda ima beskonacno rjesenja jednacine
            {
                cout << "Beskonacno rjesenja" << endl;
            }
            else
            {
                cout << "Nemoguce!" << endl; // ako su Dx i Dy razliciti od nule onda je sistem nemoguc
            }
        }
    }
};
int main() // main funkcija
{
    JednaNepoznata Prvi(5, 20);           // kreiranje objekta za jednacinu sa jednom nepoznatom
    DveNepoznate Drugi(1, 2, 1, 3, 4, 5); // kreiranje objekta za jednacinu dvije nepoznate
    unsigned int izbor;                   // varijabla za izbor operacije
    do                                    // do-while petlja koja se vrti dok je izbor manji od 4
    {
        cout << "\n\n1:Sistem jedna nepoznata\n2:Sistem dvije nepoznate\n3:Izlaz" << endl;
        cout << "Unesite vas izbor->";
        cin >> izbor; // unos izbora
        switch (izbor)
        {
        case 1: // kada je izbor jedan racuna se jednacina sa 1 nepoznatom
            Prvi.resavanje();
            break;
        case 2: // kada je izbor dva racuna se jednacina sa dvije nepoznate
            Drugi.resavanje();
            break;
        case 3:
            cout << "Izasli ste iz programa \n"; //ako se unese tri izlazi se iz programa
            break;
        default:
            cout << "Pogresan izbor!!" << endl;
            break;
        }
    } while (izbor < 4);
    return 0;
}