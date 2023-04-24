#include <iostream>
using namespace std;

int main (){

    int n1,n2,n3;

    cout << "Ordem crescente dos numerais." <<endl;
    cout << "Numero 1: ";
    cin >> n1;
    cout << "Numero 2: ";
    cin >> n2;
    cout << "Numero 3: ";
    cin >> n3;

    if (n1 > n2 && n2 > n3){
        cout << "A ordem crescente fica: " << n3 << " " << n2 << " " << n1 << endl;
    }
    else if (n1 > n3 && n3 > n2){
        cout << "A ordem crescente fica: " << n2 << " " << n3 << " " << n1 << endl;
    }
    else if (n2 > n1 && n1 > n3){
        cout << "A ordem crescente fica: " << n3 << " " << n1 << " " << n2 << endl;
    }
    else if (n2 > n3 && n3 > n1){
        cout << "A ordem crescente fica: " << n1 << " " << n3 << " " << n2 << endl;
    }
    else if (n3 > n2 && n2 > n1){
        cout << "A ordem crescente fica: " << n1 << " " << n2 << " " << n3 << endl;
    }
    else if (n3 > n1 && n1 > n2) {
        cout << "A ordem crescente fica: " << n2 << " " << n1 << " " << n3 << endl;
    }
}

