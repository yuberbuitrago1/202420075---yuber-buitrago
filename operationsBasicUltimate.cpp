#include <iostream>

using namespace std; 

int main() {
    int inputValue1, inputvalue2; 
    int sumResult, subResult, divisionResult, moduleResult, multiResult; 

    //seleccionar operacion
    int selectedOperation; 

    cout << "bienvenido" <<endl;
    cout << "ingrese el primer valor: ";
    cin >> inputValue1;
    cout <<endl << "ingrese el segundo valor: ";
    cin >> inputvalue2;

    cout << "ingrese la operacion que desea realizar: suma= 1, resta= 2, multiplciacion= 3, division= 4, modulo= 5"
    cin >> selectedOperation;


    if (selectedOperation == 1);
    {
        sumResult = inputValue1 + inputvalue2;
        cout << "el resultado de la suma es: " << sumResult;
    }

    else if (selectedOperation == 2)
    {
        subResult = inputValue1 - inputvalue2;
        cout << " el resultado de la resta es: " << subResult;
    }

    else if ( selectedOperation == 3 )
    {
        multiResult = inputValue1 * inputvalue2;
        cout << "el resultado de la multiplicacion es: " << multiResult; 
    }

    else if ( selectedOperation == 4 )
    {
        divisionResult = inputValue1 / inputvalue2
        cout << "el resultado de la division es: " << divisionResult;
    }

    else if (selectedOperation == 5)
    {
        moduleResult = inputValue1 % inputvalue2;
        cout << " el resultadon del modulo es: " << moduleResult;
    }

    return 0;
}