#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Pravougaonik
{
protected:
    int stra;
    int strb;

public:
    int obim;
    int povrsina;

    Pravougaonik(int a, int b)
    {
        stra = a;
        strb = b;
    }

    void PovrsinaP()
    {
        povrsina = stra * strb;
        cout << "Povrsina je " << povrsina << endl;
    }
    void ObimP()
    {
        obim = 2 * (stra + strb);
        cout << "Obim je" << obim << endl;
    }
    void slika()
    {

        for (int i = 1; i <= stra; i++)
        {
            for (int j = 1; j <= strb; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }
};
class Kvadrat : public Pravougaonik //naslije?ena klasa Jednakostranicni
{
public:
    Kvadrat(int stra) : Pravougaonik(stra, strb) {} //konstruktor koji naslijedjuje stranicu a
    int povrsina()
    {
        return (stra * stra);
    }
    int obim()
    {
        return 4 * stra;
    }
};

int main() //glavni program
{
    int x; // varijabla izbor, koja omogucava korisniku da bira trougao
    Pravougaonik PrviObjekat(5, 12);
    Kvadrat DrugiObjekat(9); //objekti napravljeni na osnovu klasa

    do //petlja ponavljanja do..while
    {
        cout << "\n\n1:Raznostranicni trougao\n2:Jednakostranicni\n3:Jednakokraki\n4:Izlaz" << endl;
        cin >> x;
        switch (x) //naredba grananja switch
        {
        case 1:
            cout << "Povrsina pravougaonika je ";
            PrviObjekat.PovrsinaP();
            cout << endl
                 << "Obim pravougaonika je";
            PrviObjekat.ObimP();
            cout << endl;
            cout << "Odgovarajuca slika je " << endl;
            PrviObjekat.slika(); // na objektu ObjektA primjenjujemo metode koje smo napisali u klasi
            break;
        case 2:
            cout << "Povrsina kvadrata je" << DrugiObjekat.povrsina() << endl;
            cout << "Obim kvadrata je " << DrugiObjekat.obim() << endl;
            break;
        case 3:
            return 0;
        default:
            cout << "Pogresan unos!" << endl; // ukoliko je izbor korisnika neki drugi broj ili karakter
        }
    } while (x != 4);
    system("PAUSE");
    return 0;
}