#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
//deklarisemo makro za odredjivanje duzine stringa
#define DUZINA 99
int main( void )
{
//deklarisemo ulazni string i unosimo pomocu funkcije gets(get string)
char cUlaz1[ DUZINA + 1];
cout<<"Unesite string->"<<endl;
gets(cUlaz1);
//deklarisemo ulazni string i unosimo pomocu funkcije gets(get string)
char cUlaz2[ DUZINA + 1];
cout<<"Unesite string->"<<endl;
gets(cUlaz2);
// povezujemo pokazivace sString1 sa prvim stringom cUlaz1
// povezujemo pokazivace sString2 sa prvim stringom cUlaz2
char* sString1 = cUlaz1;
char* sString2 = cUlaz2;
//deklarisemo izlazni string
char cIzlaz[ DUZINA + DUZINA + 1];
// indeks za prolazak kros cIzlaz
int i = 0;
while( * sString1 != '\0' )
{
cIzlaz[i] = * sString1;
i++;
sString1++;
}
while( * sString2 != '\0' )
{
cIzlaz[i] = * sString2;
i++;
sString2++;
}
cIzlaz[ i ] = '\0';
cout<<cIzlaz<<endl;
return EXIT_SUCCESS;
}