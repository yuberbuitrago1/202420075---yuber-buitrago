#include <iostream>

using namespace std;

int main(){

    int numberPapers;

    cout << "fabrica" << endl << "digite el numero de paquetes: ";
    cin >> numberPapers;

    if (numberPapers%2 == 0)
    {
        int counter=0;
        while (counter <= numberPapers)
        {
            cout << "numero de serie: " << counter << endl;
            counter=counter + 2;
        }
    }
    else
    {
        int counter=1;
        while (counter <= numberPapers)
        {
            cout << "numero de serie: " << counter << endl;
            counter=counter + 2;
        }
    }

    return 0;
}