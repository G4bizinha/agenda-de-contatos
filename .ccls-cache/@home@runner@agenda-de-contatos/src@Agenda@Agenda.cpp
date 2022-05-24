#include "Agenda.hpp"
#include "../ContatoGeral/ContatoGeral.hpp"
#include "../Fornecedor/Fornecedor.hpp"
#include "../Cliente/Cliente.hpp"
#include "../Data/Data.hpp"
#include "../Cores.hpp"
#include <iostream>
using namespace std;

ContatoGeral contato[20];
Fornecedor fornecedor;
Cliente cliente;
Data data;
int controleMenu = 1;
	string Nome, Email, telefone, dataAniversario , 
	fidelidade, ultimaDataCompra, auxUltimaDataCompra;
	int PrimaryKey=0 , opcSalvar;
	int indcQualidade, i;

  void Agenda::Show(){

	int op;
  
  do{
    cout << color::yellown << " --- 📒AGENDA --- \n";
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
            cout << color::cyan << "Por favor! Insira os dados nos campos abaixo." << color::off << endl;
	          cout << "Digite qual o nome que você deseja inserir na lista:" << endl;
	  				cin >> Nome;
	  				fornecedor.setNome(Nome);
	  				cout << "Digite o e-mail📧:" << endl;
	  				cin >> Email;
	  				fornecedor.setEmail(Email);
	  				cout << "Digite o telefone📱:" << endl;
	  				cin >> telefone;
	  				fornecedor.setTelefone(telefone);
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
            cout << color::cyan << "Por favor! Insira os dados nos campos abaixo." << color::off << endl;
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
								cout << color::blue << "Qual a fidelidade desse Cliente? " << endl;
            		cout << "Fiel | Frequente | Pouco Frequente | Apenas Uma Vez \n" << color::off;
                cin >> fidelidade;
								
							//}while(fidelidade != "Fiel" || "fiel" || (fidelidade != "Frequente" || "frequente") || (fidelidade != "Pouco Frequente" || 
								//"pouco frequente") || (fidelidade != "Apenas Uma Vez" || "apenas uma vez"));
								
	  				cliente.setFidelidade(fidelidade);
						cout << "Qual a data da ultima compra?" << endl;

						data.CriarData();
	  				cliente.setDataCompra(data.get_dataFormatada());

              cout << color::green << "CLIENTE CADASTRADO COM SUCESSO🎉!" << color::off << endl;
						PrimaryKey++;
							
						break;
				}
					
      break;
				
      case 2:
       //contato.Excluir();
      break;

      case 3:
       	cout << color::blue << " -------- Listar Contatos -------- \n" << color::;
				cout << "qual o tipo de contato você deseja procurar:" << endl;
				cout << "1 - Fornecedor | 2 - Cliente" << endl;
				
				cin >> i;

				switch(i)
					{
						case 1:
							//fornecedor - exibir
							 
							
						break;
						case 2:
							//cliente - exibir

							
						break;
					}
      break;

      case 4:

        cout << "-------- Editar Contato -------- \n";
				
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