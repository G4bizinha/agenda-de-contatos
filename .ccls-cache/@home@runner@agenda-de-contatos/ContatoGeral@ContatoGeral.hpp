#include <iostream>
#include <vector> 
using namespace std;
#ifndef CONTATO_GERAL_H
#define CONTATO_GERAL_H

class ContatoGeral
{
  public:
		void Cadastrar();
		void Excluir();
		void Listar();
		void Consultar();
    void setNome(string n);
    void setEmail(string e);
    void setTelefone(string t);
    void setEndereco(string e);
    void setDataAniversario(string d);
    string getNome();
    string getEmail();
    string getTelefone();
    string getEndereco();
    string getDataAniversario();
  
  protected:
    vector <string> nome;
    vector <string> email;
    vector <string> telefone;
    vector <string> endereco;
    vector <string> dataAniversario;
};
#endif