#include <iostream>
#include <cmath>
using namespace std;

class Trougao
{
protected:
    double a, b, c;

public:
    Trougao(double A, double B, double C)
    {
        a = A;
        b = B;
        c = C;
    }
    double povrsina()
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double obim()
    {
        return a + b + c;
    }
    void srafura()
    {
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= a; j++)
            {
                if ((i + j) >= (a + 1))
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
};

class Jednakostranicni : public Trougao
{
public:
    Jednakostranicni(double a) : Trougao(a, b, c) {}
    double povrsina()
    {
        return (a * a * sqrt(3) / 4);
    }
    double obim()
    {
        return 3 * a;
    }
};

class Jednakokraki : public Trougao
{
public:
    Jednakokraki(double a, double b) : Trougao(a, b, c){};

    double povrsina()
    {
        return (a * sqrt(4 * b * b - a * a)) / 4;
    }
    double obim()
    {
        return a + 2 * b;
    }
};
int main(int argc, char **argv)
{
    int izbor;
    Trougao ObjektA(4, 13, 15);
    Jednakostranicni ObjektB(5);
    Jednakokraki ObjektC(5, 4);
    do
    {
        cout << "\n\n1:Raznostranicni trougao\n2:Jednakostranicni\n3:Jednakokraki\n4:Izlaz" << endl;
        cin >> izbor;
        switch (izbor)
        {
        case 1:
            cout << "Povrsina raznostranicnog trougla je P=" << ObjektA.povrsina() << endl;
            cout << "Obim tog trougla je O=" << ObjektA.obim() << endl;
            cout << "Odgovarajuca srafura je=" << endl;
            ObjektA.srafura();
            break;
        case 2:
            cout << "Povrsina jednakostranicnog trougla je P=" << ObjektB.povrsina() << endl;
            cout << "Obim tog trougla je O=" << ObjektB.obim() << endl;
            break;
        case 3:
            cout << "Povrsina jednakokrakog trougla je P=" << ObjektC.povrsina() << endl;
            cout << "Obim tog trougla je O=" << ObjektC.obim() << endl;
            break;
        case 4:
            return 0;
        default:
            cout << "Pogresan unos!" << endl;
        }
    } while (izbor != 4);
    return 0;
}