/*
    Predmet: Programiranje
    Razred: II7
    Ucenik: Matija Mirkovic
    Zadatak:  Ispisati veličinu u radijanima i trigonometrijske vrijednost za unesene uglove.  
    Kompajler: g++ trigonometrija.cpp -o trigonometrija; .\trigonometrija

*/

// pozivanje biblioteka
#include <iostream>
#include <cmath>

// definisajne makroa PI 
using namespace std;
#define PI 3.14159265

//funkcija koja pretvara uglove u radijane
double rad( double a){ 
    double b = a * PI / 180.0; // formula za pretvaranje uglau u radijan
    cout << "Radijan ugla:" << b << endl; // ispis vrijednosti radijana
    return b; // vracanje vrijednosti
} 

//main funkcija
int main(){
    
    //deklaracija varijabli 
    double ugao[100];
    int broj;
    
    //unos velicine niza
    cout<<"Unesite broj uglova: ";
    cin>>broj;
    
    //unos elemenata niza ugao
    for(int i = 0;i<broj;i++){
        cout<<"Uneite velicinu ugla: ";
        cin>>ugao[i];
    }
    
    //ispis trigonometrijskih vrijednosti
    for(int i = 0;i<broj;i++){
        cout<<endl<<"Ugao je: "<< ugao[i]<<endl; // ispis vrijednost ugla 
        double radijan = rad(ugao[i]); // pozivanje funkcije rad()
        cout << "Kosinus ugla je: "<< cos(radijan) << endl; // ispis kosinusa ugla i pozivanje funkcije cos()
        cout << "Sinus ugla je: "<< sin(radijan) << endl; // ispis Sinusa ugla i pozivanje funkcije sin()
        cout << "Tangens ugla je: "<< tan(radijan) << endl; // ispis tangensa ugla i pozivanje funkcije tan()
        cout << "Kotangens ugla je: "<< 1/tan(radijan) << endl; // ispis kotangensa ugla i pozivanje funkcije tan()
        cout<<endl;
    }
    
    return 0;
}
/*
Ispis:
Unesite broj uglova: 5
Uneite velicinu ugla: 0.0
Uneite velicinu ugla: 30.0
Uneite velicinu ugla: 45.0
Uneite velicinu ugla: 60.0
Uneite velicinu ugla: 90.0

Ugao je: 0
Radijan ugla:0
Kosinus ugla je: 1
Sinus ugla je: 0
Tangens ugla je: 0
Kotangens ugla je: inf


Ugao je: 30
Radijan ugla:0.523599
Kosinus ugla je: 0.866025
Sinus ugla je: 0.5
Tangens ugla je: 0.57735
Kotangens ugla je: 1.73205


Ugao je: 45
Radijan ugla:0.785398
Kosinus ugla je: 0.707107
Sinus ugla je: 0.707107
Tangens ugla je: 1
Kotangens ugla je: 1


Ugao je: 60
Radijan ugla:1.0472
Kosinus ugla je: 0.5
Sinus ugla je: 0.866025
Tangens ugla je: 1.73205
Kotangens ugla je: 0.57735


Ugao je: 90
Radijan ugla:1.5708
Kosinus ugla je: 1.7949e-009
Sinus ugla je: 1
Tangens ugla je: 5.57135e+008
Kotangens ugla je: 1.7949e-009

*/
