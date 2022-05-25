#include "Agenda.hpp"
#include "../ContatoGeral/ContatoGeral.hpp"
#include "../Fornecedor/Fornecedor.hpp"
#include "../Cliente/Cliente.hpp"
#include "../Data/Data.hpp"
#include "../Cores.hpp"
#include <iostream>
using namespace std;

ContatoGeral contato;
Fornecedor fornecedor;
Cliente cliente;
Data data;
int controleMenu = 1;
	string Nome, Email, telefone, dataAniversario , endereco ,
	fidelidade, ultimaDataCompra, auxUltimaDataCompra;
	int PrimaryKey=0 , opcSalvar;
	int indcQualidade, i;

  void Agenda::Show(){

	int op;
  
  do{
    cout << color::yellown << "\n --- 📒AGENDA --- \n";
    cout << "Digite uma opção: \n";
    cout << "1.Cadastrar Contato🧍🏻 \n";
    cout << "2.Excluir Contato 🚶🏻\n";
    cout << "3.Listar Contatos por Tipo/Categoria📑 \n"; 
    cout << "4.Consulta/Edição de Dados em um Contato📝 \n";
    cout << "0.Sair \n" << color::off;
    cin >> op;
		

    switch (op) {
        
		  case 1:
         cout << color::blue << " --- Cadastrar Contato🧍🏻 --- \n" << color::off;
				cout << "Você deseja salvar esse contato como: \n" << color::green << "1 - Fornecedor🧑🏻‍💼" 
					<< color::off << "|" << color::cyan << "2 - Cliente🧑🏻" << color::off << endl;
        cin >> opcSalvar; 
				
					switch(opcSalvar){
					int indcQualidade;
						
					case 1:
						fornecedor.setID(PrimaryKey);
            cout << color::cyan << "Por favor! Insira os dados nos campos abaixo:" << color::off << endl;
	          cout << "Digite qual o nome que você deseja inserir na lista:" << endl;
	  				cin >> Nome;
	  				fornecedor.setNome(Nome);
	  				cout << "Digite o e-mail📧:" << endl;
	  				cin >> Email;
	  				fornecedor.setEmail(Email);
	  				cout << "Digite o telefone📱:" << endl;
	  				cin >> telefone;
	  				fornecedor.setTelefone(telefone);
	  				cout << "Digite o endereço🗺️ :" << endl;
						cin >> endereco;
	  				fornecedor.setEndereco(endereco);
	  				cout << "Digite a data de aniversário🥳:" << endl;
	  				cin >> dataAniversario;
	  				fornecedor.setDataAniversario(dataAniversario);
						cout << "Digite qual o índice de qualidade desse Fornecedor:" << endl;
	  				cin >> indcQualidade;
						fornecedor.setIndiceQualidade(indcQualidade);

              cout << color::green << "FORNECEDOR CADASTRADO COM SUCESSO🎉!" << color::off << endl;
						PrimaryKey++;
				
					break;
						case 2:
						cliente.setID(PrimaryKey);
            cout << color::cyan << "Por favor! Insira os dados nos campos abaixo:" << color::off << endl;
	          cout << "Digite qual o nome que você deseja inserir na lista:" << endl;
	  				cin >> Nome;
	  				cliente.setNome(Nome);
	  				cout << "Digite o e-mail📧:" << endl;
	  				cin >> Email;
	  				cliente.setEmail(Email);
	  				cout << "Digite o telefone📱:" << endl;
	  				cin >> telefone;
	  				cliente.setTelefone(telefone);
	  				cout << "Digite a data de aniversário🥳:" << endl;
	  				cin >> dataAniversario;
	  				cliente.setDataAniversario(dataAniversario);
					
            // do{
								cout << "Qual a fidelidade desse Cliente? " << endl;
            		cout << color::blue << "Fiel | Frequente | Pouco Frequente | Apenas Uma Vez \n" << color::off;
                cin >> fidelidade;
								
							//}while(fidelidade != "Fiel" || "fiel" || (fidelidade != "Frequente" || "frequente") || (fidelidade != "Pouco Frequente" || 
								//"pouco frequente") || (fidelidade != "Apenas Uma Vez" || "apenas uma vez"));
								
	  				cliente.setFidelidade(fidelidade);
						cout << "Qual a data da última compra?" << endl;

						data.CriarData();
	  				cliente.setDataCompra(data.get_dataFormatada());

              cout << color::green << "CLIENTE CADASTRADO COM SUCESSO🎉!" << color::off << endl;
						PrimaryKey++;
							
						break;
				}
					
      break;
				
      case 2:
        cout << color::purple << "-------- Excluir Contato -------- \n" << color::off;
        int id;
       	cout << "Qual o id do contato que você deseja remover? ";
				cin >> id;
				contato.apagarContato(id);
				
      break;

      case 3:
       	cout << color::blue << " -------- Listar Contatos -------- \n" << color::off;
				cout << "qual o tipo de contato você deseja procurar:" << endl;
				cout << "1 - Fornecedor | 2 - Cliente" << endl;
				
				cin >> i;

				switch(i)
					{
						case 1:
							//fornecedor - exibir
							cout << color::greenn << " --- Fornecedores: --- \n" << color::off;
						cout << " Nomes: ";
              fornecedor.getNome();
							cout << " \n ";
						cout << " Endereços: ";
							fornecedor.getEndereco();
							cout << " \n ";
						cout << " Telefones: ";
							fornecedor.getTelefone();
							cout << " \n ";
						cout << " Datas de Aniversários: ";
							fornecedor.getDataAniversario();
							cout << " \n ";
						cout << " Emails: ";
							fornecedor.getEmail();
							cout << " \n ";
						cout << " Indices de qualidades: ";
              fornecedor.getIndiceQualidade();
							cout << " \n ";
							cout << color::greenn << " ------------------------- \n" << color::off;
							
						break;
						case 2:
							//cliente - exibir
            	cout << color::cyann << "--- Clientes: --- \n" << color::off;
            
						cout << " Nomes: ";
              cliente.getNome();
							cout << " \n ";
						cout << " Endereços: ";
							cliente.getEndereco();
							cout << " \n ";
						cout << " Telefones: ";
							cliente.getTelefone();
							cout << " \n ";
						cout << " Datas de Aniversarios: ";
							cliente.getDataAniversario();
							cout << " \n ";
						cout << " Emails: ";
							cliente.getEmail();
							cout << " \n ";
						cout << "Fidelidades: ";
              cliente.getFidelidade();
							cout << " \n ";
            cout << "Fidelidades: ";
              cliente.getDataCompra();
							cout << " \n ";
							cout << color::cyann << " ------------------------- \n" << color::off;
						break;
					}
      break;

      case 4:

        cout << color::yellow << "-------- Editar Contato -------- \n" << color::off;
				
				cout << "Qual o id do contato que você deseja consultar ?";
				cin >> i;

      break;

      case 0:
        cout << "Saindo... \n";
      break;

      default:
        cout<< color::red <<"ERRO❗ Opção inválida❌, digite de novo \n" << color::off;
    }//switch
		}while(controleMenu == 1);
	
}