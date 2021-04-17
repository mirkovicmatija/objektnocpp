/*
    Potrebno je da se ispise string bez samoglasnika
*/
#include <iostream> // pozivanje biblioteke
 
 int main(){ //main funkcija
    char st[] = "qwerty"; //deklaracija varijable tipa char, ovde unosimo string 
    char* pn = st; // definisanje pokazivaca
    while(*pn != '\0'){ // petlja
        if(*pn != 'a' && *pn != 'e' && *pn != 'i' && *pn != 'o' && *pn != 'u'){ // uslov 
            std::cout<< *pn; // ispis karaktera
        }
        pn++; 
    }    
    return 0;
 }
 // ipis: qwrty