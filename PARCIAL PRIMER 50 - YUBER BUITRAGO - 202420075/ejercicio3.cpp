#include <iostream>

using namespace std;

bool requiresMaintenance(int sheets, int interval){

    if (sheets % interval == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){

    int sheets, interval;

    cout << "ingrese cuantas hojas se produjeron: ";
    cin >> sheets;
    cout << "ingrese cada cuantas hojas la maquina debe detenerse: ";
    cin >> interval;

    if (requiresMaintenance(sheets, interval))
    {
        cout << "la maquina requiere mantenimiento" << endl;
    } 
    else
    {
        cout << "la maquina no requiere mantenimiento" << endl;
    }
    return 0;
}