#include <iostream>

using namespace std;

int showTable(int number){

    cout << "tabla de: " << number << endl;

    for(int i= 0 ; i<=10; i++)
    {
        int multiplicacionResult;
        multiplicacionResult=number*i;

        cout << number << " * " << i << " = " << multiplicacionResult << endl;
    }

    return 0;
}

int main(){

    int number;

    cout << "ingrese el numero de la tabla que quiere ver: ";
    cin >> number;

    showTable(number);

    return 0;
}