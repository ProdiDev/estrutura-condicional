#include <iostream>
using namespace std;

int main () {

    int idade;

    cout << "De entrada na sua idade: ";
    cin >> idade;

    if (idade>=18){
        cout << "Voce e de maior";
    }
    else if ( idade < 18){
        cout << "Voce e de menor";
    }

}
