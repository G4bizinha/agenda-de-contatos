#include "../ContatoGeral/ContatoGeral.hpp"
#include <vector>
class Cliente: public ContatoGeral
{
  public:
		void Cadastrar();
    void setDataCompra(string c);
    void setFidelidade(string f);
    string getDataCompra();
    string getFidelidade();
  
  private:
   	vector <string> dataCompra;
    vector <string> fidelidade;
};