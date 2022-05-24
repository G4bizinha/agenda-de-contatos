#include "ContatoGeral.hpp"
#include "../Fornecedor/Fornecedor.hpp"
#include "../Cliente/Cliente.hpp"

void ContatoGeral::setID(int i){
	id.push_back(i);
}
void ContatoGeral::setNome(string n){
  nome = n;	
}
void ContatoGeral::setEmail(string e){
  email = e;
}
  void ContatoGeral::setTelefone(string t){
  telefone = t;
}
  void ContatoGeral::setEndereco(string e){
  endereco = e;
}
  void ContatoGeral::setDataAniversario(string d){
  dataAniversario.push_back(d);
}
  string ContatoGeral::getNome(int x){
	return nome;
}
  string ContatoGeral::getEmail(int x){
  return email;
}
  string ContatoGeral::getTelefone(int x){
  return telefone;
}
  string ContatoGeral::getEndereco(int x){
  return endereco;
}
  string ContatoGeral::getDataAniversario(int x){
  return dataAniversario;
}
