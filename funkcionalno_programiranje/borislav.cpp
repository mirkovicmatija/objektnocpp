#include <iostream>
using namespace  std;

// funkcija az poredjenje brojeva
int provjera(int a, int b){
    if(a<b){ // USLOV ako je prvi broj manji vratiti -1
        return -1;
    }else if (a>b){ // USLOV ako je prvi broj veci vratiti 1
        return 1;
    }else{   // ako nisu ispunjeni uslovi vratiti 0
        return 0;
    }
}

int main(){
    // definisanje velicine matrice i matrica
    int n,matrica1[100][100], matrica2[100][100];
    // unos velicina matrice
    cout<<"unesite velicinu matrica: ";
    cin >> n;
    // unos prve matrice
    cout<<"unos prve matrice: ";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
        cin>>matrica1[i][j];
        }
    }
    // unos druge matrice
    cout<<"unos druge matrice: ";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
        cin>>matrica2[i][j];
        }
    }
    // ispis rezultata
    cout<<"ispis rezultata: ";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
        int ispis = provjera(matrica1[i][j],matrica2[i][j]); // pozivanje funkcije za poredjenje brojeva
        cout<<ispis<<" ";
        }
        cout<<endl;
    }
    return 0;
}