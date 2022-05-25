#include "Fornecedor.hpp"

  void Fornecedor::setIndiceQualidade(int i)
{
  indiceQualidade.push_back(i);
}
  int Fornecedor::getIndiceQualidade()
{
  for(auto it = indiceQualidade.begin(); it!= indiceQualidade.end(); ++it)
			cout << " " << *it;
  
}