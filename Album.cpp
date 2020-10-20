#include <iostream>

class Album
{
public:
    std::string prva_pjesma = "Istina";
    std::string Izvodjac = "Djecaci";
    int godina = 2011;
};

int main()
{
    Album Istina;
    std::cout << Istina.godina << std::endl;
    std::cout << Istina.Izvodjac << std::endl;
    return 0;
}