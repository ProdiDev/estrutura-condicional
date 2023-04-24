#include <iostream>
using namespace std;

int main(){

    int n1,n2;

    cout << "Retornar menor."<<endl;
    cout << "Insira o numero : ";
    cin >> n1;
    cout << "Insira o segundo numero: ";
    cin >> n2;

    if (n1>n2){
        cout <<n2<<endl;
    }
    if (n2>n1)
        cout <<n1<<endl;

}