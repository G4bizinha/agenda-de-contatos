#include <iostream>
#include <vector> 
using namespace std;
#ifndef CONTATO_GERAL_H
#define CONTATO_GERAL_H

class ContatoGeral
{
  public:
		void setID(int i);
    void setNome(string n);
    void setEmail(string e );
    void setTelefone(string t);
    void setEndereco(string e);
    void setDataAniversario(string d);
    string getNome();
    string getEmail();
    string getTelefone();
    string getEndereco();
    string getDataAniversario();
		
  protected:
     string nome[10];
     string email[10];
     string telefone[10];
     string endereco[10];
     string dataAniversario[10];
     int id[10];
};
#endif

