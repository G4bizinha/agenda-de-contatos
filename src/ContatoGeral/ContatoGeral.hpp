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
    void setTelefone(string t;
    void setEndereco(string e);
    void setDataAniversario(string d);
    string getNome(int x);
    string getEmail(int x);
    string getTelefone(int x);
    string getEndereco(int x);
    string getDataAniversario(int x);
		
  protected:
     string nome;
     string email;
     string telefone;
     string endereco;
     string dataAniversario;
     int id;
};
#endif