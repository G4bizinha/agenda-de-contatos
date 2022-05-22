#include "Agenda.hpp"
#include "../ContatoGeral.hpp"
#include <iostream>
using namespace std;

ContatoGeral contato;


void Agenda::Show(){

	int op;

  do{
    cout << " --- AGENDA ---\n";
    cout << "Digite uma opção: \n";
    cout << "1.Cadastrar Contato \n";
    cout << "2.Excluir Contato \n";
    cout << "3.Listar Contatos por Tipo/Categoria \n"; 
    cout << "4.Consulta/Edição Dados em um Contato \n";
    cout << "0.Sair \n";
    cin >> op;
    
  }while(op != 0);

    switch (op) {
      case 1:
        contato.Cadastrar();
      break;
				
      case 2:
       contato.Excluir();
      break;

      case 3:
       	contato.Listar();
      break;

      case 4:
        contato.Consultar();
      break;

      case 0:
        cout << "Saindo... \n";
      break;

      default:
        cout<< "ERRO! Opção inválida, digite de novo \n";
    }//switch
	
}