#include <iostream>
using namespace std;

void sumam(int &s, int x){
     int* ptr = &s;
     if(x > 3){
        *ptr = *ptr + x;}
        
 }

int main(){
    int suma=0;
    int matrica[5][5];
    for(int i = 0; i<5;i++){ 
        for(int j = 0; j <5;j++){
            cin>>matrica[i][j];
        }
    } 
    for(int i = 0; i < 5;i++){
        for(int j =0; j < 5;j++){
            cout<< matrica[i][j]<<" ";
            
            sumam(suma, matrica[i][j]);
        }
        cout<<endl;

    } 
    cout<<suma<<endl;
    cout<<&suma<<endl;
    return 0;
 }