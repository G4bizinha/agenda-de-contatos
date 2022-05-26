#include "../ContatoGeral/ContatoGeral.hpp"
#include <vector>
class Fornecedor: public ContatoGeral
{
  public:
		void Cadastrar();
    void setIndiceQualidade(int i);
    void getIndiceQualidade();
  private:
   vector <int> indiceQualidade;
};