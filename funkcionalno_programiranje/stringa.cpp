/*
    Predmet: Programiranje
    Razred: II7
    Ucenik: Matija Mirkovic
    Zadatak: Napisi program koji ce u unesenom stringu pretvori samoglasnike u simbol '*' a razmake u simbol '#'. 
             Zadatak treba da prebroji broj promjena u stringu.   
    Kompajler: g++ stringa.cpp -o stringa; .\stringa
    
*/

// Pozivanje biblioteka  
#include <iostream>
#include <ctype.h>
using namespace std;

// definisanje funkcije
void stringa(char a, int &n){
    
    char slovo = tolower(a); // pretvaranje znakova u mala slova
    if(slovo == 'a' || slovo == 'e' || slovo == 'i' || slovo == 'o' || slovo == 'u'){cout<<'*';n++;} //uslov: ako je znak samoglasnik ispisati '*' i uvecati brojac za 1 
    else if(a == ' '){cout<<'#';n++;}// uslov: ako je znak prazno mjesto ispisati '#' i uvecati brojac za 1
    else{cout<<a;} // ispisati znak ako uslovi nisu ispunjeni
} 

// main funkcija
int main(){
// definisanje vrijednosti brojaca, stinga i pokaivaca na string
int br = 0;
char ulaz[100];
char* ptr = ulaz; 

//unos stringa
cout<<"Unesite svoj string: ";
cin.get(ulaz, 100);

//ispis stringa
cout<<"Ispis stringa: ";
while(*ptr != '\0'){stringa(*ptr, br);*ptr++;}// while petlja, pozivanje funkcije unutar petlje i prelazak na sledeci znak u stringu

//ispis broja promjena u stringu
cout<<endl<<"broj promjena na stringu: "<<br;
return 0;
}

/*
primjer ispisa:
Unesite svoj string: asdf asdf asdf
*sdf#*sdf#*sdf#
broj promjena na stringu 6
*/