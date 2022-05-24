#include "Data.hpp"
#include "../Cores.hpp"
using namespace std;

int d, m, a;
int anoatual = 2022;
int controle1=1;
bool b1 = 0; 

  void Data::set_dia(int d){dia = d;}
  void Data::set_mes(int m){mes = m;}
  void Data::set_ano(int a){ano = a;}
  void Data::formatar(){dataFormatada = to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);}
  int Data::get_dia(){return dia;}
  string Data::get_dataFormatada(){formatar();return dataFormatada;}
  int Data::get_mes(){return mes;}
  int Data::get_ano(){return ano;}

void DataErro(){
	cout << color::redn << " --------------- Erro❗ ------------ \n" << color::off;
	cout << " Digite uma Opção valida! \n";
	cout << " ---------------------------------- \n";
}

void Data::CriarData(){
	do{
	cout << color::blue << "Digite o ano📆: " << color::off;
  cin >> a;
		if(a<2022){
			DataErro();
		}
	}while(a<2022);

	ano = a;
	
	

	if(ano % 400 == 0){
		cout << "É bissexto" << endl;
					b1 =1;
	}else if((ano % 4 == 0) && (ano % 100 != 0) ){
            cout << "É bissexto" << endl;
					b1 =1;
			}else{
        cout << "Não é bissexto" << endl;
				b1 = 0;
		}
  	
	
	
	cout << "------------------------------------\n";
	cout << color::cyan << "Digite o mês🗓️: \n 1- Janeiro \n 2- Fevereiro \n 3- Março \n 4- Abril \n 5- Maio \n 6- Junho";
	cout << "\n 7- Julho \n 8- Agosto \n 9- Setembro \n 10- Outubro \n 11- Novembro \n 12- Dezembro \n" << color::off;
	cout << "------------------------------------\n";
	cin >> mes;

	switch(mes)
		{
			case 1:
				do{
					cout << "------- Janeiro -----\n";
  				
					cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
					cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
					cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
					cout <<"|29| |30| |31| \n" << color::off;
					cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
						if(d >= 1 && d <= 31){
								dia = d;
								mes = 1;
								controle1 = 0;
						}else{
							DataErro();
							controle1 = 1;
						}
				}while(controle1 == 1);  
break;
			case 2:
				do{
				cout << "------- Fevereiro-----\n";
  			
    		cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
    		cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
				cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n"<< color::off;
					if(b1==1){
						cout << color::red << "|29| \n" << color::off;
					}
					cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
		if((d >= 1 && dia <= 29 && b1==1) || (d >=1 && d <= 28 && b1==0)){
				dia = d;
				mes = 2;
				controle1 =0;
		}else{
			DataErro();
			controle1 =1;
		}
	}while(controle1 == 1);		
break;
			case 3:
				do {
    			cout << "------- Março -----\n";
         
					cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
					cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
					cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
					cout <<"|29| |30| |31| \n" << color::off;
       		cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
								if(d >= 1 && d <= 31){
									dia = d;
									mes = 3;
									controle1 =0;
								}else{
									DataErro();
                  controle1 = 1;
                  }
              }while (controle1 == 1);
			break;
			
			case 4:
				do {
  				cout << "------- Abril -----\n";
  				
					cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
					cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
					cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
					cout <<"|29| |30| \n" << color::off;
    			cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
			if(d >= 1 && d <= 30){
				dia = d;
				mes = 4;
				controle1=0;
			}else{
			DataErro();
        controle1=1;
			}
  }while (controle1 == 1);
break;
			case 5:
				do {
  				cout << "------- Maio -----\n";
         
					cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
					cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
					cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
					cout <<"|29| |30| |31| \n" << color::off;
    			cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
			if(d >= 1 && d <= 31){
				dia = d;
				mes = 5;
				controle1=0;
			}else{
			DataErro();
        controle1=1;
			}
  }while (controle1 == 1);	
break;

			case 6:
				do {
  				cout << "------- Junho -----\n";
        	
					cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
					cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
					cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
					cout <<"|29| |30| \n" << color::off;
    			cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
			if(d >= 1 && d <= 30){
				dia = d;
				mes = 6;
				controle1=0;
			}else{
			DataErro();
        controle1=1;
			}
  }while (controle1 == 1);	
break;
			
      case 7:
			do {
  					cout << "------- Julho -----\n";
            
						cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
						cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
						cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
						cout <<"|29| |30| |31| \n" << color::off;
    			cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
			if(d >= 1 && d <= 31){
				dia = d;
				mes = 7;
				controle1=0;
			}else{
			DataErro();
        controle1=1;
			}
  }while (controle1 == 1);	
break;
      case 8:
						do {
  					cout << "------- Agosto -----\n";
            
						cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
						cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
						cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
						cout <<"|29| |30| |31| \n" << color::off;
    			cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
			if(d >= 1 && d <= 31){
				dia = d;
				mes = 8;
				controle1=0;
			}else{
			DataErro();
        controle1=1;
			}
  }while (controle1 == 1);	
				break;

      case 9:
							do {
  					cout << "------- Setembro -----\n";
           
						cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
						cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
						cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
						cout <<"|29| |30| \n" << color::off;
    			cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
			if(d >= 1 && d <= 30){
				dia = d;
				mes = 9;
				controle1=0;
			}else{
			DataErro();
        controle1=1;
			}
  }while (controle1 == 1);	
break;

			case 10:
				do {
  					cout << "------- Outubro -----\n";
            
						cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
						cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
						cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
						cout <<"|29| |30| |31| \n" << color::off;
    			cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
			if(d >= 1 && d <= 31){
				dia = d;
				mes = 10;
				controle1=0;
			}else{
			DataErro();
        controle1=1;
			}
  }while (controle1 == 1);
			break;

      case 11:
				do {
  					cout << "------- Novembro -----\n";
            
						cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
						cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
						cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
						cout <<"|29| |30| \n" << color::off;
    			cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
			if(d >= 1 && d <= 30){
				dia = d;
				mes = 11;
				controle1=0;
			}else{
			DataErro();
        controle1=1;
			}
  }while (controle1 == 1);
break;

			case 12:
				do {
  					cout << "------- Dezembro -----\n";
            
						cout << color::red << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
						cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
						cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
						cout <<"|29| |30| |31| \n" << color::off;
    			cout << color::bluen << "Digite o dia📅: " << color::off;
					cin >> d;
			if(d >= 1 && d <= 31){
				dia = d;
				mes = 12;
				controle1=0;
			}else{
			DataErro();
        controle1=1;
			}
  }while (controle1 == 1);
			break;

			default:
			DataErro();
			
		}
	}
			