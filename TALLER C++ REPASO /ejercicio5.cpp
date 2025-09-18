#include <iostream>

using namespace std;

int mayorNumber(int firstNumber, int secondNumber){

    if (firstNumber > secondNumber)
    {
        cout << "el numero mayor es: " << firstNumber;
        return firstNumber;
    }
    else 
    {
        cout << "el numero mayor es: " << secondNumber;
        return secondNumber;
    }

}

int main(){

    int firstNumber, secondNumber;

    cout << "ingrese 1 valor: ";
    cin >> firstNumber;
    cout << "ingrese otro valor: ";
    cin >> secondNumber;

    mayorNumber(firstNumber, secondNumber);

    return 0;
}