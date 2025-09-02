#include <iostream>

using namespace std;

int main() {

    int numberTable;

    cout <<"ingrese el numero de la tabla que quiere ver: ";
    cin >> numberTable;

    cout << "la tabla de " << numberTable << " es: " << endl; 

    for (int i = 1; i <= 10; i++)
    {
        cout << numberTable << "*"  << i  << "=" << numberTable*i << endl;

    }
    

    return 0;
}