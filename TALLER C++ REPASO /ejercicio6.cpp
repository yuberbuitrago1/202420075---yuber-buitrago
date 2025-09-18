#include <iostream>

using namespace std;

int mayorthreeNumbers(int numberOne, int numberTwo, int numberThree){
    if (numberOne > numberTwo && numberOne > numberThree) 
    {
        return numberOne;
    }
    else if (numberTwo > numberOne && numberTwo > numberThree) 
    {
        return numberTwo;
    }
    else 
    {
        return numberThree;
    }
}

int main(){

    int one, two, three;
    int mayorNumber;

    cout << "ingrese un numero: ";
    cin >> one;

    cout << "ingrese un numero: ";
    cin >> two;

    cout << "ingrese un numero: ";
    cin >> three;

    mayorNumber= mayorthreeNumbers(one, two, three);

    cout << "el numero mayor es: " << mayorNumber << endl;

}