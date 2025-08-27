#include <iostream>

using namespace std;

int main() {
    //definir variables a operar y operaciones para realizar
    int inputValue1, inputValue2;
    int addResult, subResult, multiResult, divResult, moduleResult;

    //definir variable para elegir operacion
    int selectedOperation;

    //ingresra valores a operar
    cout << "bienvenido" << endl;
    cout << "ingrese el primer valor: ";
    cin >> inputValue1; 
    cout << endl <<"ingrese el segundo valor: ";
    cin >> inputValue2;

    //ingresar opercion a realizar
    cout << endl << "operaciones para realizar: " << endl << "suma: 1" << endl << "resta: 2" << endl << "multiplicacion: 3" << endl << "division: 4" << endl << "modulo: 5" << endl;
    cout << endl << "que operacion quiere realizar: ";
    cin >> selectedOperation;


    // uso del comando swich para establecer las operaciones y realizarlas
    switch (selectedOperation)
    {
    case 1:
        addResult = inputValue1 + inputValue2;
        cout << "suma: " << addResult << endl;
        break;

    case 2: 
        subResult = inputValue1 - inputValue2;
        cout << "resta: " << subResult << endl;
        break;

    case 3: 
        multiResult = inputValue1 * inputValue2;
        cout << "multiplicacion: " << multiResult << endl;
        break;

    case 4: 
        divResult = inputValue1 / inputValue2;
        cout << "division: " << divResult << endl;
        break;

    case 5: 
        moduleResult = inputValue1 % inputValue2;
        cout << "modulo: " << moduleResult << endl;
        break;
    
    default:
        
        cout << "la operacion elegida no es valida" << endl;
        break;
    }

    return 0;
}