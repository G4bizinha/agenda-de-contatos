#include "ContatoGeral.hpp"
#include "../Fornecedor/Fornecedor.hpp"
#include "../Cliente/Cliente.hpp"

void ContatoGeral::setID(int i){
	id.push_back(i);
}
void ContatoGeral::setNome(string n){
  nome.push_back(n);	
}
void ContatoGeral::setEmail(string e){
  email.push_back(e);
}
  void ContatoGeral::setTelefone(string t){
  telefone.push_back(t);
}
  void ContatoGeral::setEndereco(string e){
  endereco.push_back(e);
}
  void ContatoGeral::setDataAniversario(string d){
  dataAniversario.push_back(d);
}
  void ContatoGeral::getNome(){

		 for(auto it = nome.begin(); it!= nome.end(); ++it)
			cout << " " << *it;
}

  void ContatoGeral::getEmail(){
    for(auto it = email.begin(); it!=email.end(); ++it)
      cout << " " << *it;;
}
  void ContatoGeral::getTelefone(){
		for(auto it = telefone.begin(); it!=telefone.end(); ++it)
      cout << " " << *it;;
}

  void ContatoGeral::getEndereco(){
		for(auto it = endereco.begin(); it!=endereco.end(); ++it)
      cout << " " << *it;;
}

  void ContatoGeral::getDataAniversario(){
		for(auto it = dataAniversario.begin(); it!=dataAniversario.end(); ++it)
      cout << " " << *it;;
}

void ContatoGeral::apagarContato(int i){
	nome[i].erase();
	telefone[i].erase();
	endereco[i].erase();
	
}