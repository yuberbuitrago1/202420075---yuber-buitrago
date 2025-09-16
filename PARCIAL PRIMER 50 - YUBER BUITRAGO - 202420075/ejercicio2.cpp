#include <iostream>

using namespace std;

int main(){

    int startCounter, endCounter;

    cout << "fabrica" << endl ;
    cout << "digite la hora de comienzo de la maquina: ";
    cin >> startCounter;
    cout << "digite la hora de finalizacion de la maquina: ";
    cin >> endCounter;

    if (startCounter < endCounter)
    {
        int counter;
        counter=startCounter;

        while (counter <= endCounter)
        {
            cout << "turno de: " << counter << endl;
            counter++;
        }
    }
    else 
    {
        cout << "ERROR - ERROR " << "el turno inicial no puede ser mayor que el final" << endl;
    }

    return 0;
}