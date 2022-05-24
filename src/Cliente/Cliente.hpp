#include "../ContatoGeral/ContatoGeral.hpp"

class Cliente: public ContatoGeral
{
  public:
		void Cadastrar();
    void setDataCompra(string c);
    void setFidelidade(string f);
    string getDataCompra();
    string getFidelidade();
  
  private:
    string dataCompra;
    string fidelidade;
};