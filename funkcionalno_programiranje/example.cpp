#include <iostream>

#include <fstream>

using namespace std;

int main() {

ifstream input;



char a, b, x;

input.open("data.txt"); // otvaranje datoteke

input.get(a); // čitanje tri kontrolna znaka

input.get(b);

input.get(x);

// provjera tri kontrolna znaka

if( a == 'a' && b == 'b' && x == 'x' ) {

cout << "prepoznat tip datoteke!" << endl;

} else {

cout <<"nepoznat tip datoteke!" << endl;

}

input.close(); // zatvaranje datoteke

return 0;

}