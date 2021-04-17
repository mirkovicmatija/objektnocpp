#include <iostream>
using namespace std;

class Auto
{
private:
    int godiste = 2012;
    float motor = 2.0;
    string marka = "BMW";
    string model = "M3";

public:
    void ispisiPodakte();

    int Starost(int tren_god) { return tren_god - godiste; }
};

void Auto::ispisiPodakte()
{
    cout << "marka : " << marka << endl;
    cout << "model : " << model << endl;
    cout << "Godiste : " << godiste << endl;
    cout << "motor : " << motor << endl;
}

int main()
{
    Auto mojAuto;

    mojAuto.ispisiPodakte();
    cout << "Auto je staro :" << mojAuto.Starost(2020) << endl;

    return 0;
}