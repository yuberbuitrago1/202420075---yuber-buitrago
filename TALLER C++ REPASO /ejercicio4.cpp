#include <iostream>

using namespace std;

int ascendingCounter(int number){

    int counter=0;

    while (counter <= number)
    {
        cout << counter << endl;
        counter++;
    }

    return 0;
}

int descendingcounter(int number){

    int counter;
    counter=number;

    while (counter >= 0)
    {
        cout << counter << endl;
        counter--;
    }

    return 0;
}

int main(){

    int number;

    cout <<"ingrese el numero de contador: ";
    cin >> number;

    cout << "ascendente" << endl;
    ascendingCounter(number);

    cout << "------------------";

    cout << "descendente" << endl;
    descendingcounter(number);

    return 0;
}