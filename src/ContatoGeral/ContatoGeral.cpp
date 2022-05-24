#include "ContatoGeral.hpp"
#include "../Fornecedor/Fornecedor.hpp"
#include "../Cliente/Cliente.hpp"


  void ContatoGeral::setID(int i)
{
	id.push_back(i);
}

  void ContatoGeral::setNome(string n)
{
  nome.push_back(n);
	
}
  void ContatoGeral::setEmail(string e)
{
  email.push_back(e);
}
  void ContatoGeral::setTelefone(string t)
{
  telefone.push_back(t);
}
  void ContatoGeral::setEndereco(string e)
{
  endereco.push_back(e);
}
  void ContatoGeral::setDataAniversario(string d)
{
  dataAniversario.push_back(d);
}
  string ContatoGeral::getNome(int x)
{
	return nome[x];
}
  string ContatoGeral::getEmail(int x)
{
  return email[x];
}
  string ContatoGeral::getTelefone(int x)
{
  return telefone[x];
}
  string ContatoGeral::getEndereco(int x)
{
  return endereco[x];
}
  string ContatoGeral::getDataAniversario(int x)
{
  return dataAniversario[x];
}


