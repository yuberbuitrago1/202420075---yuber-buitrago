#include <iostream>

using namespace std; 

int main(){

    string userName;
    int userAge;
    double userHeight;

    cout << "hola, ingrese su nombre: ";
    cin >> userName;
    cout << endl << "ahora ingrese su edad: ";
    cin >> userAge;
    cout << "ahora ingrese su estatura en metros: ";
    cin >> userHeight;

    cout << "hola " << userName << " tu edad es de " << userAge << " años " << "y su altura es de " << userHeight << " metros" << endl;

    return 0;
}