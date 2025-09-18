#include <iostream>

using namespace std;

void clasificacionNumber(int number){
    if (number < 0)
    {
        cout << "el numero es negativo" << endl;
    }
    else if (number == 0)
    {
        cout << "el numero es cero" << endl;
    }
    else if (number > 0)
    {
        cout << "el numero es positivo" << endl;
    }
}

int main(){

    int number;

    cout << "ingrese un numero: ";
    cin >> number;

    clasificacionNumber(number);

    return 0;
}