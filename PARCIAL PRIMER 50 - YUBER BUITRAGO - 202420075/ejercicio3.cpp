#include <iostream>

using namespace std;

bool requiresMaintenance(int sheets, int interval){

    if (sheets/interval)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int mian(){

    int sheets, interval;
    bool needsMaintenance;

    cout << "ingrese cuantas hojas se produjeron: ";
    cin >> sheets;
    cout << "ingrese cada cuantas hojas la maquina debe detenerse: ";
    cin >> interval;

    needsMaintenance == requiresMaintenance(sheets, interval);

    if (needsMaintenance)
    {
        cout << "la maquina requiere mantenimiento" << endl;
    } 
    else
    {
        cout << "la maquina no requiere mantenimiento" << endl;
    }
    return 0;
}