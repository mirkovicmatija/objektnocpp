#include <iostream>
using namespace std;

class Auto
{
private:
    string marka = "BMW";
    string model = "M3";
    int godiste = 2012;
    float motor = 2.0;

public:
    void ispisiPodakte();
    int Starost(int tren_god) { return tren_god - godiste; }
};

void Auto::ispisiPodakte()
{
    cout << "marka : " << marka << endl;
    cout << "model : " << model << endl;
    cout << "Godiste : " << godiste << endl;
    cout << "motor" << motor << endl;
}

int main()
{
    Auto mojAuto;
    mojAuto.ispisiPodakte();
    return 0;
}