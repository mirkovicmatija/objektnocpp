#include <iostream>

using namespace std;
class Covjek
{
private:
    int godine;
    int kilogrami;
    string ime;

public:
    void ispisi();
    Covjek(int a, int b, string c);
    ~Covjek(){};
};

Covjek::Covjek(int a, int b, string c)
{
    godine = a;
    kilogrami = b;
    ime = c;
}
void Covjek::ispisi()
{
    cout << godine << endl;
    cout << kilogrami << endl;
    cout << ime << endl;
}

int main()
{
    Covjek Janko(12, 77, "Janko");
    Janko.ispisi();
    cout << endl;
    return 0;
}