#include "Cliente.hpp"

void Cliente::setDataCompra(string c)
{
  dataCompra = c;
}

void Cliente::setFidelidade(string f)
{
  fidelidade = f;
}
    
string Cliente::getDataCompra()
{
  return dataCompra;
}
string Cliente::getFidelidade()
{
  return fidelidade;
}

void Cliente::Cadastrar(){
	string dataCompra;
  cout << "Qual a Data da ultima Compra" << endl;
	cout << "digite a Data:";
	cin >> dataCompra;
	
  cout << "Qual o nível de fidelidade desse cliente?" << endl;
	cout << "digite a Fidelidade:";
	cin >> fidelidade;
	
	
}