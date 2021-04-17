/*
    Potrebno je da se ispise string ali umjesto samoglasnika treba se ispisati *
    Ucenik: Matija Mirkovic
        Razred: II7
        Predmet: Programiranje
        
        g++ string2.cpp -o string2
        ./string2
*/
#include <iostream> // pozivanje biblioteke
 
 int main(){ // main funkcija
    char st[] = "qwertyio"; // deklaracija stringa i upis stringa
    char* pn = st; // deklaracija pokazivaca
    while(*pn != '\0'){ // while petlja koja izvrsava naredbu dok je vrijednost pokazivaca nije \0
        if(*pn != 'a' && *pn != 'e' && *pn != 'i' && *pn != 'o' && *pn != 'u'){ //uslov ako je slovo nije samoglasnik onda ga treba ispisati 
            std::cout<< *pn; // ispis slova
        }else{std::cout<< '*';} // ispis simbola ako je glas samoglasnik
         pn++; 
    } 
  
    return 0;
 }
 // ispis: qw*rty**