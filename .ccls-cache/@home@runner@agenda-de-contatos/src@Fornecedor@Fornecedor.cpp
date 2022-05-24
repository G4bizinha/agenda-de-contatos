#include "Fornecedor.hpp"

  void Fornecedor::setIndiceQualidade(int i)
{
  indiceQualidade = i;
}
  int Fornecedor::getIndiceQualidade()
{
  return indiceQualidade;
}

void Fornecedor::Cadastrar(){
	int indiceQualidade;
  cout << "Qual o indice de qualidade ?" << endl;
	cin >> indiceQualidade;
	this->indiceQualidade = indiceQualidade;
}