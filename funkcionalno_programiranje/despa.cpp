// pozivanje biblioteka, definisanje makra
#include <iostream>
#define MAX 100 
using namespace std;

//funkcija broj
void broj(int x){ 
    if(x<0){ // USLOV: Ako je broj negativan ispisati -
        cout<<"-";
    }else if(x>0){ // USLOV: Ako je broj pozitivan ispisati +
        cout<<"+";
    }else{ // Ako uslovi nisu ispunjeni ispisati 0
        cout<<"0";
    }
}

int main(){
    //definisanje varijabla velicine matrice i matrice
    int n, matrica[MAX][MAX];
    
    //unos velicine
    cout<<"Unesite velicinu matrice: ";
    cin>>n;
    
    //unos elemenata matrice
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<< "unesite clan matrice: ";     
            cin>>matrica[i][j];
        } 
    } 
    //ispis rezultata
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            broj(matrica[i][j]); // pozivanje funkcije
        } 
    cout<<endl;
    } 
    return 0;
}