#include <iostream>

using namespace std;

int main() {

    int numberTable;

    cout <<"ingrese el numero de la tabla que quiere ver: ";
    cin >> numberTable;

    cout << "la tabla de " << numberTable << " es: " << endl; 

    for (int i = 1; i <= 10; i++)
    {
        cout << "tabla de: " << i << endl;

        for (int j = 1; j <= 10; j++)
        {
            int multiplicacionResult= i * j;

            cout << i << " * " << j << " = " << multiplicacionResult << endl;
            
        }
        cout << "--------------" << endl;

    }
    

    return 0;
}