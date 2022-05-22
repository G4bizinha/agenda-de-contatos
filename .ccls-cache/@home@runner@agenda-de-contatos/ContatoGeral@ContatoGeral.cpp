#include "ContatoGeral.hpp"
#include "./Fornecedor/Fornecedor.hpp"
#include "./Cliente/Cliente.hpp"

Fornecedor fornecedor;
Cliente cliente;

  void ContatoGeral::setNome(string n)
{
  nome.push_back(n);
	//vetor[no].info
}
  void ContatoGeral::setEmail(string e)
{
  email.push_back(e);
}
  void ContatoGeral::setTelefone(string t)
{
  email.push_back(t);
}
  void ContatoGeral::setEndereco(string e)
{
  endereco.push_back(e);
}
  void ContatoGeral::setDataAniversario(string d)
{
  dataAniversario.push_back(d);
}
  string ContatoGeral:: getNome()
{
	int id;
	cout << "Qual o ID do contato?" << endl;
	cin >> id;
  return nome.at(0);
}
  string ContatoGeral::getEmail()
{
  return email.at(0);
}
  string ContatoGeral::getTelefone()
{
  return telefone.at(0);
}
  string ContatoGeral::getEndereco()
{
  return endereco.at(0);
}
  string ContatoGeral::getDataAniversario()
{
  return dataAniversario.at(0);
}

void ContatoGeral::Cadastrar(){
	
	string nome , telefone , email , dataAniversario, endereco;
	int op;
	
	cout << "qual o nome do contato que você deseja salvar? \n";
 	cout << "digite o nome:";
	cin >> nome;
	this-> nome.push_back(nome);
	//<<! Telefone >>
	cout << "qual o Telefone do contato que você deseja salvar? \n";
 	cout << "digite o Telefone:";
	cin >> telefone;
	this-> telefone.push_back(telefone);
	//<<! Email>>
	cout << "qual o email do contato que você deseja salvar? \n";
 	cout << "digite o Email:";
	cin >> email;
	this-> email.push_back(email);
	//<<! Endereço >>
	cout << "qual o endereço do contato que você deseja salvar? \n";
 	cout << "digite o endereço:";
	cin >> endereco;
	this-> endereco. push_back(endereco);
	//<<! Aniversario >>
	cout << "qual a Data de Aniversario do contato que você deseja salvar? \n";
 	cout << "digite o Data de Aniversario:";
	cin >> dataAniversario;
	this-> dataAniversario.push_back(dataAniversario);

	cout << "Deseja salvar esse contato como Forcenecedor ou Cliente ? \n";
	cout << "1 - Fornecedor | 2 - Cliente \n";
	cin >> op;

	
			switch(op){
				case 1:
					fornecedor.Cadastrar();
				break;
		
		    case 2:
					cliente.Cadastrar();
		    break;
		}
	}
