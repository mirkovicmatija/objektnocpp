#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream myfile;
    myfile.open("example.txt");
    myfile << "Writing this to a file joj.\n";
    myfile.close();
    return 0;
}