#include <iostream>
#include <climits>

using namespace std;
//jednostavna klasa kandidat sa poljima ime tipa string i cijelobrojnim tipom za broj glasova
class candidate
{
public:
    string name;
    int vote;
};
// funkcija za racunanje glasova
void outputElection(candidate *arr)
{
    int total_vote = 0;

    //for petlja za racunanje ukupnog broja glasova
    for (int i = 0; i < 5; i++)
    {
        total_vote = total_vote + arr[i].vote;
    }
    //modul za ispisivanje rezultata izbora
    cout << "rezultati izbora............." << endl;
    cout << "Prezime kandidata"
         << "\t"
         << "Broj glasova"
         << "\t"
         << "procenat glasova" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].name << "\t\t\t";
        cout << arr[i].vote << "\t\t";
        cout << (arr[i].vote * 100) / total_vote << "%" << endl;
    }
    // definisanje varijable max, count i indeks
    int max = INT_MIN;
    int count = 0;
    int index[5] = {0};
    // pretraga niza i trazenja najveceg clana
    for (int i = 0; i < 5; i++)
    {
        if (arr[i].vote > max)
        {
            max = arr[i].vote;
        }
    }
    //prebrojavanje clanova niza koji imaju maksimalnu vrijednost
    for (int i = 0; i < 5; i++)
    {
        if (arr[i].vote == max)
        {
            index[count] = i;
            count++;
        }
    }
    // ako je varijabla count 1 ispisuje se pobjednik izbora, u suprotnom se ispisuju kandidati sa najvise glasova
    if (count == 1)
        cout << "Pobjednik je" << arr[index[count - 1]].name << endl;
    else
    {
        cout << "Jednak broj glasova imaju:" << endl;
        for (int i = 0; i < count - 1; i++)
            cout << arr[index[i]].name << ", ";
        cout << arr[index[count - 1]].name << endl;
        cout << "Svi su pobjednici\n";
    }
}

int main()
{
    // definisajne stringa s, intigera v koji se unose i niza objekataklase candidate
    string s;
    int v;
    candidate arr[5];
    cout << "Unesite prezime kandidata, na izborima ucestvuje pet kandidata\n";

    //for petlja koja sluzi za unos podataka u clanove niza objekata
    for (int i = 0; i < 5; i++)
    {
        cout << "unesite kandidata " << i << " prezime\n";
        cin >> s;
        arr[i].name = s;
        cout << "Unesite broj glasova kandidata" << i << endl;
        cin >> v;
        arr[i].vote = v;
    }
    outputElection(arr); // pozivanje funkcija za racunanje izbora
    return 0;
}
