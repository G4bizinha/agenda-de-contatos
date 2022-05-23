#include "./Cliente/Cliente.hpp"
#include "./Fornecedor/Fornecedor.hpp"
#include "./Agenda/Agenda.hpp"


Agenda agenda;

int main ()
{

	/*
  ContatoGeral contato;
  Cliente cliente;
  Fornecedor fornecedor;
	Agenda agenda;

*/
	agenda.Show();
	
 /*
	
  contato.setNome ( " Gabi " );
	contato.setTelefone ( " (51)99142-5152 " );
	contato.setEndereco ( " Viamão " );
	contato.setDataAniversario ( " 15/11 " );
	contato.setEmail ( " gabi.von@uniritter.edu.br " );


	cliente.setNome ( " Gabriel " );
	cliente.setTelefone ( " (51)93223-0989 " );
	cliente.setEndereco ( " Viamão " );
	cliente.setDataAniversario ( " 17/01 " );
	cliente.setEmail ( " gabriel@uniritter.edu.br " );
	cliente.setDataCompra ( " 18/05 " );
	cliente.setFidelidade ( " Cliente Campo " );

	fornecedor.setNome ( " Geordani " );
	fornecedor.setTelefone ( " (51)98065-7910 " );
	fornecedor.setEndereco ( " Porto Alegre " );
	fornecedor.setDataAniversario ( " 07/03 " );
	fornecedor.setEmail ( " geordani@uniritter.edu.br " );
	fornecedor.setIndiceQualidade ( 8 );

	

	cout << " \n\n Contato Geral: \n " ;
	cout << contato.getNome () << " - " << contato.getDataAniversario () << " - " << contato.getEndereco () << " - " ;
	cout << contato.getEmail () << " - " << contato.getTelefone () << endl;

	
	cout << " \n\n Contato Cliente: \n " ;
	cout << cliente.getNome () << " - "   << cliente.getDataAniversario () << " - " << cliente.getEndereco () << " - " ;
	cout << cliente.getEmail () << " - " << cliente.getTelefone () << " - " << cliente.getDataCompra () << " - " ;
	cout << cliente. getFidelidade () << endl;

	cout << " \n\n Contato Fornecedor: \n " ;
	cout << fornecedor.getNome () << " - "   << fornecedor.getDataAniversario () << " - " << fornecedor.getEndereco () << " - " ;
	cout << fornecedor.getEmail () << " - " << fornecedor.getTelefone () << " - "   <<fornecedor.getIndiceQualidade () << endl;

	*/
}

