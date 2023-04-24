#include <iostream>
using namespace std;

int main(){

  float salario;
  char cod;
  string cargo;
  const float salarioescrituario = 1900.00;
  const float salariosecretario = 1400.00;
  const float salariocaixa = 1700.00;
  const float salariogerente = 3800.00;
  const float salariodiretor = 5100.00;

  cout << "Aumento de Salario." <<endl;
  cout << "Me diga o codigo do seu cargo: ";
  cin >> cod;

  if (cod=='1'){
    cargo = "escrituario";
    salario = (salarioescrituario * 0.50) + salarioescrituario;
    cout << "O seu cargo e " <<cargo <<  " o seu novo salario e: " <<salario;
  }
  if (cod=='2'){
    cargo = "secretario";
    salario = (salariosecretario * 0.35) + salariosecretario;
    cout << "O seu cargo e " <<cargo <<  " o seu novo salario e: " <<salario;
  }
    if (cod=='3'){
    cargo = "caixa";
    salario = (salariocaixa * 0.20) + salariocaixa;
    cout << "O seu cargo e " <<cargo <<  " o seu novo salario e: " <<salario;
  }
  if (cod=='4'){
    cargo = "gerente";
    salario = (salariogerente * 0.10) + salariogerente;
    cout << "O seu cargo e " <<cargo <<  " o seu novo salario e: " <<salario;
  }
    if (cod=='5'){
    cargo = "diretor";
    cout << "O seu cargo e " <<cargo <<  " voce nao tem direito ao aumento, seu salario se mantem em: " <<salariodiretor;
  }
}