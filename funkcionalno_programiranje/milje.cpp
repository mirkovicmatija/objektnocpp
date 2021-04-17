// pozivanje biblioteke
#include <iostream>
using namespace std;

//funkcija racun koja pretavar milje u km i obrnuto
void racun(float a, char b){
    if(b == 'm' || b == 'M'){ // uslov: ako je unuseno slovo m izracunati i ispisati udaljenist u miljama
         cout<<"Udaljenost u miljama je: "<< a / 1.609<<endl;
    }else if(b =='k' || b == 'K'){ // uslov: ako je unuseno slovo k izracunati i ispisati udaljenist u kilometrima
         cout<<"Udaljenost u kilometrima je: "<< a * 1.609<<endl;
    }else{ // ako uslovi nisu isunjeni ispisati greska
        cout<<"Greska pri unosu"<<endl;
    }
}

//main funkcija
int main(){
    // deklaracija varijabli
    float vr;
    char unos;
    // unos izboraoperacije
    cout<<"Unestit k ako zelite pretvoriti milje u kilometre ili unesite m ako zelite pretvoriti kilometre u milje ";
    cin>>unos;
    //unos vrijednosti koju treba pretvoriti
    cout<<"Uneite zeljenu vrijednost"<<endl;
    cin>>vr;
    
    //pozivanje funkcije za pretvaranje i ispis
    racun(vr,unos);
    
    return 0;
}