#include <iostream>

using namespace std;

void sumOfTwoValues( int valueOne, int valueTWo) {

    int sumResult;
    sumResult= valueOne + valueTWo;

    cout << "el resultado de la suma es: " << sumResult << endl;
}

void subOfTwoValues( int valueOne, int valueTWo) {
    int subResult;
    subResult= valueOne - valueTWo;

    cout << "el resultado de la resta es: " << subResult << endl; 
}

int multiOfTwoValues( int valueOne, int valueTWo){
    int multiResult;
    multiResult= valueOne * valueTWo;

    cout << "el resultado de la multiplicacion es: " << multiResult << endl; 

    return multiResult; 
}

int divideNumbers( double valueOne, double valueTWo){
    double divResult;
    divResult= valueOne / valueTWo;

    if (valueTWo != 0)
    {
        cout << "el resultado de la division es: " << divResult << endl;  
    }
    else
    {
        cout << "error, no se puede dividir en cero" << endl;
    }


    return divResult; 
}

int moduleOfTwoValues( int valueOne, int valueTWo){
    int moduleResult;
    moduleResult= valueOne % valueTWo;

    cout << "el modulo de la division es: " << moduleResult << endl; 

    return moduleResult; 
}

int getMax( int valueOne, int valueTwo){
    
    if (valueOne < valueTwo)
    {
        cout << "el valor mayor es: " << valueTwo << endl;
    }
    else if ( valueOne > valueTwo)
    {
        cout << "el valor mayor es: " << valueOne << endl;
    }
    else if (valueOne == valueTwo)
    {
        cout << " los numeros son iguales" << endl;
    }

    return 0;
}

int square(int valueOne){
    int squareResult;
    squareResult = valueOne * valueOne;

    cout << valueOne << " al cuadrado es: " << squareResult << endl;

    return squareResult;
}

int main() {

    int valueOne, valueTwo; 
    int userOperacion; 

    cout << "ingrese un numero: "; 
    cin >> valueOne; 

    cout << endl << "ingrese otro numero: "; 
    cin >> valueTwo;


    cout << endl << "operaciones para realizar: " << endl;
    cout << "suma: 1" << endl;
    cout << "resta: 2" << endl;
    cout << "multiplicacion: 3" << endl;
    cout << "division: 4" << endl;
    cout << "modulo: 5" << endl;
    cout << "numero mayor: 6" << endl;
    cout << "cuadrado del numero: 7" << endl;
    cout << endl << "que operacion quiere realizar: ";
    cin >> userOperacion; 

    switch (userOperacion)
    {
    case 1:
        sumOfTwoValues(valueOne, valueTwo);
        cout << endl;
        break;
    
    case 2:
        subOfTwoValues(valueOne, valueTwo);
        cout << endl;
        break;

    case 3:
        multiOfTwoValues(valueOne, valueTwo);
        cout << endl;
        break;

    case 4:
        divideNumbers(valueOne, valueTwo);
        cout << endl;
        break;

    case 5:
        moduleOfTwoValues(valueOne, valueTwo);
        cout << endl;
        break;

    case 6:
        getMax(valueOne, valueTwo);
        cout << endl;
        break;

    case 7:
        square(valueOne);
        cout << endl;
        break;

    default:
        cout << "eleccion erronea";
        break;
    }



    return 0;
}