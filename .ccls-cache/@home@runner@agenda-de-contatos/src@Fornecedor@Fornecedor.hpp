#include "../ContatoGeral/ContatoGeral.hpp"
class Fornecedor: public ContatoGeral
{
  public:
		void Cadastrar();
    void setIndiceQualidade(int i);
    int getIndiceQualidade();
  private:
   int indiceQualidade;
};