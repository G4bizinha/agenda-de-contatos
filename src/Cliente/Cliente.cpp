#include "Cliente.hpp"

void Cliente::setDataCompra(string c){
  
  dataCompra.push_back(c);

}

void Cliente::setFidelidade(string f){
  
  fidelidade.push_back(f);

}
    
string Cliente::getDataCompra(){
  
  for(auto it = dataCompra.begin(); it!= dataCompra.end(); ++it)
			cout << " " << *it;
  
}
string Cliente::getFidelidade()
{
  for(auto it = fidelidade.begin(); it!= fidelidade.end(); ++it)
			cout << " " << *it;
}

