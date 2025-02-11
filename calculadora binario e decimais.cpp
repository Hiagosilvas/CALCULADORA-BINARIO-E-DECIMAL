#include <iostream> 
#include <fstream> 
#include <string.h> 
#include <stdlib.h> 
#include <math.h> 
#include <stdio.h> 
#include <locale.h> 


// autor Hiago

using namespace std;

void menuprincipal(){
  
	  int contador = 1;
	   int decimal;
	   int binario[11];
	   char opic = 's';
	while((opic == 's')or (opic =='S'))
	
	  do
	   {
		 int opcao;
		 
		
		

    cout <<"\t___________________________________________\n"; 
	cout <<"                                          " <<endl; 
	cout <<"\t              CALCULADORA               \n\n";  
	cout <<"\t           BINÁRIO E DECIMAL            \n\n"; 
    cout <<"\t___________________________________________\n"; 
    cout <<"\t                                           \n\n" <<endl; 
    cout <<"\t_______VAMOS COMEÇAR OS CALCULOS ^-^_______\n\n"; 
    cout <<"\t| CLIQUE  (1) DECIMAL PARA BINÁRIO         | "<< endl;    
    cout <<"\t| CLIQUE  (2) BINÁRIO PARA DECIMAL         | "<< endl; 
    cout <<"\t| CLIQUE  (3) SAIR                         | "<< endl; 
    cout <<"\n\t DIGITE UM NÚMERO EQUIVALENTE: ";    
                         cin>>opcao; 
    
    
	 cin>>opcao;
	      system ("cls");
	      if(opcao == 1)
		  {
		   cout << "VOCÊ ESCOLHEU DECIMAL PARA BINÁRIO, DIGITE UM NÚMERO PARA CONVERSÃO:" <<endl;
		   cin>> decimal;
		   
		   for(int cont = 10; cont> -1 ; cont--)
		   {
		   	if (decimal % 2 ==0){
				   binario[cont]=0;
			   }else
			   {
				   binario[cont]=1;
			   }
			   decimal= decimal/2;
		   } 
		   system ("cls");
		   
		    cout << ("EM BINÁRIO FICA: ")<< endl;
		    
			     cout << "  " <<endl;
		    for(int i = 0; i <11 ; i++)
		   {
	     
			   	 cout << binario[i]; 
		   }	  
		        cout << "  " <<endl;
                cout << "  " <<endl;
		        cout << "  " <<endl;
		        cout << "-----------------------------------" << endl;	
		        cout << "DESEJA CONTINUAR  ??? " << endl;
		        cout << "-----------------------------------" << endl;   
   
	            cout << " DIGITE (s/S) PARA CONTINUAR" << endl;	
	            cout << " DIGITE (N)PARA ENCERRAR O PROGRAMA" << endl; 
	 
	    cout << "ESCOLHA UMA OPÇÃO ACIMA:  ";cin >> opic;  
		  system("cls");
		  }else
		  {
			if (opcao==2){
				int binario=0;
				int decimal=0;
				cout << "VOCÊ ESCOLHEU BINÁRIO PARA DECIMAL, DIGITE UM NÚMERO PARA CONVERSÃO:" <<endl;
		        cin>> binario;
		        system("cls");
              
              cout << "EM DECIMAL FICA: " << endl;
              
              for(int i = 0; i < 11; i++)
			  {
			decimal = decimal + pow(2, i)* (binario%10);
			binario = binario/10;	  
			  }
			     cout <<decimal << endl;
			  
			    cout << "  " <<endl;
                cout << "  " <<endl;
		        cout << "  " <<endl;
			    cout << "-----------------------------------" << endl;	
		        cout << "DESEJA CONTINUAR: " << endl;
		        cout << "-----------------------------------" << endl;   
   
	            cout << " DIGITE (s/S) PARA CONTINUAR" << endl;	
	            cout << " DIGITE (N)PARA ENCERRAR O PROGRAMA" << endl; 
	 
	    cout << "ESCOLHA UMA OPÇÃO ACIMA:  ";cin >> opic; 
		system("cls"); 
			}else
			{
				if (opcao==3){
					
					cout <<"  " << endl;
					cout << "Saindo " << endl;
					contador=opcao;
				}else {
					cout <<"  " << endl;
					cout << "voce digitou uma opção invalida" << endl;
				}
			}  
			  
		  }
		 
	   } while(contador > 3);	
	}

void login(){
	
int count;
string userId, senha, id, sen;

 
	 cout <<"________________________________________" << endl;
	 cout <<"                                         " <<endl;
	 cout <<"           PAGINA DE lOGIN            " <<endl;
	 cout <<"________________________________________" << endl;
	
	 cout <<"  " << endl;
	 cout << "Digite o nome de usuario: " << endl;
	 cin >>userId;
	 
	 cout << " Digite a senha: " << endl;
	 cin >> senha;
	  
	     system ("cls");
	     
	     ifstream  input("login.txt");
	     
	     
	     while (input >> id >> sen){
			 
		if(id== userId && sen==senha){
			
			count = 1;
		}	 
			 
		 }
		  input.close();
	 
	 	 if(count==1) {
			  
			  
			  cout <<" \t\t " << userId << " LOGIN CONCLUIDO!" <<endl;
			  menuprincipal();  
		  }else{
			  
			 cout << "falha no login, tente novamente" << endl; 
			  
		  }
		  
	 	 
	 
	
	
}



 
void registro() {
	
	
	 string ruserId, rsenha;
	
	 
	 
	 cout <<"________________________________________" << endl;
	 cout <<"                                         " <<endl;                         
	 cout <<"           PAGINA DE CADASTRO            " <<endl;
	 cout <<"________________________________________" << endl;
	
	 cout <<"  " << endl;
	 cout << "Digite o nome de usuario: " << endl;
	 cin >>ruserId;
	 
	 cout << "Digite a senha: " << endl;
	 cin >> rsenha;
	 
	 
	 
	 ofstream f1("login.txt", ios:: app);
	 f1 << ruserId << "\n" << rsenha << endl;
	 
	 cout << "\n\t\t\t Usuario cadastrado com sucesso :) " << endl;
	
	
	
	
	
}
 int main(int argc, char** argv)
 {
	 
	 
	 setlocale(LC_ALL,"Portuguese");
	 
	  int c; 
 
  cout <<"\t____________________________________________\n";
  cout <<"                                         " <<endl; 
  cout <<"\t      CALCULADORA DE BINÁRIO E DECIMAL      \n\n";
  cout <<"                                         "   <<endl; 
  cout <<"\t___________________MENU_____________________\n"; 
  cout <<"\t                                            \n\n" <<endl; 
  cout <<"\t_________Bem vindo a pagina de Login________\n\n"; 
  cout <<"\t| CLIQUE  (1) PARA LOGIN                   | "<< endl;    
  cout <<"\t| CLIQUE  (2) PARA CADASTRO                | "<< endl; 
  cout <<"\t| CLIQUE  (3) SAIR                         | "<< endl; 
  cout <<"\n\tDIGITE UM NÚMERO EQUIVALENTE: ";     
           cin>>c; 
                          system("cls"); 
    switch(c) 
    {  	    case 1: 
 	 	 
            login(); 
 	  	  	break; 
 	  	  
 	 	    case 2:  	 	  
			  registro(); 
 	 	 
	 	 	break; 
 	  	    case 3: 
 	     	 
	     	cout << " \t\t\t OBRIGADO POR ULTILIZAR NOSSO PROGRAMA :) " <<endl; 
     	 
	 	 	break; 
 
      default: 
       
	       	cout <<"\t OPÇÃO INVALIDA!!" << endl; 
	}
     	 
 return 0; 	 
 } 