#include "Agenda.hpp"
#include "../ContatoGeral.hpp"
#include "../Fornecedor/Fornecedor.hpp"
#include "../Cliente/Cliente.hpp"
#include <iostream>
using namespace std;

ContatoGeral contato;
Fornecedor fornecedor;
Cliente cliente;


void Agenda::Show(){

	int op;

  do{
    cout << " --- AGENDA ---\n";
    cout << "Digite uma opção: \n";
    cout << "1.Cadastrar Contato \n";
    cout << "2.Excluir Contato \n";
    cout << "3.Listar Contatos por Tipo/Categoria \n"; 
    cout << "4.Consulta/Edição de Dados em um Contato \n";
    cout << "0.Sair \n";
    cin >> op;
		
  }while(op != 0);

	string Nome, Email, telefone, dataAniversario , fidelidade, ultimaDataCompra, auxUltimaDataCompra;
	int PrimaryKey=1 , opcSalvar;
	int indcQualidade;

	
    switch (op) {
        
		  case 1:

				cout << "Você deseja salvar esse contato como: \n 1 - Fornecedor | 2 - Cliente " << endl;
        cin >> opcSalvar; 
				
					switch(opcSalvar){
					int indcQualidade;
					case 1:
						
						contato.setID(PrimaryKey);
	          cout << "Qual o nome que você deseja inserir na lista ?" << endl;
	  				cin >> Nome;
	  				fornecedor.setNome(Nome);
	  				cout << "Digite um Email" << endl;
	  				cin >> Email;
	  				contato.setEmail(Email);
	  				cout << "Telefone:" << endl;
	  				cin >> telefone;
	  				contato.setTelefone(telefone);
	  				cout << "Data de Aniversario:" << endl;
	  				cin >> dataAniversario;
	  				contato.setDataAniversario(dataAniversario);
						cout << "Qual o indice de qualidade desse Fornecedor:" << endl;
	  				cin >> indcQualidade;
						fornecedor.setIndiceQualidade(indcQualidade);
						PrimaryKey++;
				
					break;
						case 2:
						contato.setID(PrimaryKey);
	          cout << "Qual o nome que você deseja inserir na lista ?" << endl;
	  				cin >> Nome;
	  				contato.setNome(Nome);
	  				cout << "Digite um Email" << endl;
	  				cin >> Email;
	  				contato.setEmail(Email);
	  				cout << "Telefone:" << endl;
	  				cin >> telefone;
	  				contato.setTelefone(telefone);
	  				cout << "Data de Aniversario:" << endl;
	  				cin >> dataAniversario;
	  				contato.setDataAniversario(dataAniversario);
						cout << "Data de Aniversario:" << endl;
	  				cin >> dataAniversario;
	  				cliente.setDataAniversario(dataAniversario);
							do{
								cout << "Qual a fidelidade desse Cliente?" << endl;
            		cout << "Fiel" << "Frequente" << "Pouco Frequente" << "Apenas Uma Vez";
                cin >> fidelidade;
								
							}while(fidelidade != "Fiel" || "fiel" && (fidelidade != "Frequente" || "frequente") && (fidelidade != "Pouco Frequente" || 
								"pouco frequente") && (fidelidade != "Apenas Uma Vez" || "apenas uma vez"));
								
	  				cliente.setFidelidade(fidelidade);
						cout << "Qual a data da ultima compra?" << endl;

							
							
							
							
	  				cliente.setDataCompra(ultimaDataCompra);
						
						PrimaryKey++;
							
						break;
				}
					
				
      break;
				
      case 2:
       contato.Excluir();
      break;

      case 3:
       	contato.Listar();
      break;

      case 4:
  
				int i;
				cout << "Qual o id do contato que você deseja consultar ?";
				cin >> i;

				

				
				


				
      break;

      case 0:
        cout << "Saindo... \n";
      break;

      default:
        cout<< "ERRO! Opção inválida, digite de novo \n";
    }//switch
	
}