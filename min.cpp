#include <iostream>

using namespace std;

class cCovjek
{
private:
    string ime;
    int godine;
    float visina;
    string profesija;
    string mjestoRodijenja;

public:
    cCovjek(string IME, int GODINE, float VISINA, string PROFESIJA, string MJESTORODJENJA)
    {
        ime = IME;
        godine = GODINE;
        visina = VISINA;
        profesija = PROFESIJA;
        mjestoRodijenja = MJESTORODJENJA;
    }
    ~cCovjek() { cout << "Pozvan je destruktor" << endl; }

    string getIme() { return ime; }
    string getProfesija() { return profesija; }
    string getMjestoRodjenja() { return mjestoRodijenja; }
    int getGodine() { return godine; }
    float getVisina() { return visina; }

    void setIme(string IME) { ime = IME; }
    void setProfesija(string PROFESIJA) { profesija = PROFESIJA; }
    void setMjestoRodjejna(string MJESTORODJENJA) { mjestoRodijenja = MJESTORODJENJA; }
    void setGodine(int GODINE) { godine = GODINE; }
    void setVisina(float VISINA) { visina = VISINA; }

    void zaposlen()
    {
        if (godine < 18 || godine > 65)
        {
            cout << ime << " je premlad/a ili prestar/a da radi" << endl;
        }
        else
        {
            if (profesija == "Nezaposlen")
            {
                cout << ime << " nije zaposlen/a" << endl;
            }
            else
            {
                cout << ime << " je zaposlen/a" << endl;
            }
        }
    }
};

void spisakLjudi(cCovjek *C[], int x)
{
    cout << "Spisak ljudi" << endl;
    cout << "Ime\tGodina\tVisina\tZanimanje\tMjesto rodjena" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << C[i]->getIme() << "\t" << C[i]->getGodine() << "\t" << C[i]->getVisina() << "\t" << C[i]->getProfesija() << "\t\t" << C[i]->getMjestoRodjenja() << endl;
    }
}

int main()
{
    cCovjek *niz[] = {new cCovjek("Marko", 29, 185, "Doktor", "Prijedor")};
    spisakLjudi(niz, sizeof(niz) / sizeof(niz[0]));
    for (int i = 0; i < sizeof(niz) / sizeof(niz[0]); i++)
    {
        niz[i]->zaposlen();
    }
    return 0;
}