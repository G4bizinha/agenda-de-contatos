#include "ContatoGeral.hpp"
#include "../Fornecedor/Fornecedor.hpp"
#include "../Cliente/Cliente.hpp"

void ContatoGeral::setID(int i){
	id =i;
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
  dataAniversario = d;
}
  string ContatoGeral::getNome(){
	return nome;
}
  string ContatoGeral::getEmail(){
  return email;
}
  string ContatoGeral::getTelefone(){
  return telefone;
}
  string ContatoGeral::getEndereco(){
  return endereco;
}
  string ContatoGeral::getDataAniversario(){
  return dataAniversario;
}
