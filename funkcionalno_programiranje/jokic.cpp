#include<iostream>

using namespace std;

 

int main( )

{

    char str[80];

 

    cout<<"Unesi string: ";

    cin.getline(str, 80);

   
    
    for(int i=0;str[i]!='\0';i++)

    {
 
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];

    }

 

    cout<<"String sa malim slovima: " << str << endl;

        

    return 0;

}
