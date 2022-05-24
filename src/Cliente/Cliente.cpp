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

