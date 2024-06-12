#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>




void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct Cadastro{
	int codigo;
	char nome_usuario[20];
	char senha[10];
	int numeros_reservados[100];
	int numeros_comprados[100];
	
};

struct Premio{
	
	int codigo;
	char nome_premio[10];
	float valor;
	
};


//variavel grobal
	struct Premio premios[100];
	struct Cadastro cliente[100];
	struct Cadastro adm[100];
	struct Cadastro usuariologado;
	int conta_cliente = 0;
	int conta_adm = 0;
	int conta_premio = 0;
	int cont_comprado = 0;
	int	cont_reservado = 0;
	
	void simular(){
		int cont=0;
		conta_cliente=0;
		cliente[conta_cliente].codigo=0;
		strcpy(cliente[conta_cliente].nome_usuario,"lucas");
		strcpy(cliente[conta_cliente].senha,"1234");
		
		conta_cliente=1;
		cliente[conta_cliente].codigo=1;
		strcpy(cliente[conta_cliente].nome_usuario,"arthur");
		strcpy(cliente[conta_cliente].senha,"5555");
			
		conta_cliente=2;
		cliente[conta_cliente].codigo=2;
		strcpy(cliente[conta_cliente].nome_usuario,"marcondes");
		strcpy(cliente[conta_cliente].senha,"1111");
		
		conta_cliente=3;
		
		premios[conta_premio].codigo=0;
		strcpy(premios[conta_premio].nome_premio,"chevete");
		conta_premio=1;
		
		premios[conta_premio].codigo=1;
		strcpy(premios[conta_premio].nome_premio,"1000.00");
		conta_premio=2;		
		
		premios[conta_premio].codigo=2;
		strcpy(premios[conta_premio].nome_premio,"troca de oleo");
		conta_premio=3;
		
		premios[conta_premio].codigo=3;
		strcpy(premios[conta_premio].nome_premio,"100.00");
		conta_premio=4;		
		
		premios[conta_premio].codigo=4;
		strcpy(premios[conta_premio].nome_premio,"50.00");
		conta_premio=5;		
		
		
		
		
	}
int validaNumero(int num, int *numAnt, int cont){
	
	int aux = 0;
	
	for(aux = 0; aux<cont; aux++){
		
		while(num==*(numAnt+aux)){
			
			
			num=(rand()%99) + 2;
			aux=0;
		}
		
	}
	
		
	return num;
	
	
}
void verificar_sorteio(int *vetor2[] ,int *sele ){
	
	int vetor1[100];	
	int valida = 0;
	int cont = 0;
	int cont1 = 0;
	int contt = 0;
	int correto=0;
	

	

		
	srand(time(NULL));	
		for (cont = 0; cont <*sele;cont ++){
			
			vetor1[cont] = (rand()%99)+2;
			
			for(cont1 = 0; cont1 <100; cont1 ++){
				
				
					if(cont>0){
				
						vetor1[cont]=validaNumero(vetor1[cont],vetor1,cont);
				
					}
					
	
			}  
		

		}
		for(cont=0;cont<100;cont++){
			
			*vetor2[cont]=vetor1[cont];
		}
		

}
void telaprincipal(){
	    
		printf("      _________________________________________________________________\n");
		printf("      --------------------------------- -------------------------------\n");
		printf("      ---------------------------  RAFFLE -----------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      *************        Entrar DIgite:<1>         ******************\n");
		printf("      *************      Cadastrar Digite:<2>        ******************\n");
		printf("      *************                                  ******************\n");
		printf("      *************            Sair <esc>            ******************\n");
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      ------------------------------Escolha uma opcao: ----------------\n");
		printf("      _________________________________________________________________\n");
		gotoxy(54,10);
}

void sellogin(){
	
		printf("      _________________________________________________________________\n");
		printf("      ---------------------------- RAFFLE -----------------------------\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      *************        Login Cliente DIgite:<1>   *****************\n");
		printf("      *************    Login Administrador Digite:<2> *****************\n");
		printf("      *************                                   *****************\n");
		printf("      *************            Sair <esc>             *****************\n");
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      ------------------------------Escolha uma opcao: ----------------\n");
		printf("      _________________________________________________________________\n");
		
	
	
	
}

void telalogin(){

		printf("      _________________________________________________________________\n");
		printf("      --------------------------   LOGIN    ---------------------------\n");
		printf("      -----------------------  ADMINISTRADOR --------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      *****************************************************************\n");
		printf("      ********* NOME DE USUARIO:                          *************\n");
		printf("      ********* SENHA:                                    *************\n");
		printf("      *****************************************************************\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      -- Selecione uma opcao:   ENTRAR>(1)    VOLTAR>(esc) ------------\n");
		printf("      _________________________________________________________________\n");

	}
	
void telalogin2(){

		printf("      _________________________________________________________________\n");
		printf("      -------------------------- TELA ---------------------------------\n");
		printf("      --------------------------- DE ----------------------------------\n");
		printf("      _________________________ CLIENTE _______________________________\n");
		printf("      *****************************************************************\n");
		printf("      ********* NOME DE USUARIO:                          *************\n");
		printf("      ********* SENHA:                                    *************\n");
		printf("      *****************************************************************\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      -- Selecione uma opcao:   ENTRAR>(1)    VOLTAR>(ESC) ------------\n");
		printf("      _________________________________________________________________\n");
	

}
	



void telacadastro(){
	
		printf("      _________________________________________________________________\n");
		printf("      ---------------------------- TELA -------------------------------\n");
		printf("      -------------------------- CADASTRO -----------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      *************     Cadastrar Cliente Digite:<1>    ***************\n");
		printf("      *************   Novo Administrador  Digite:<2>    ***************\n");
		printf("      *************                                     ***************\n");
		printf("      *************            voltar <esc>             ***************\n");
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      ------------------------------Escolha uma opcao:  ---------------\n");
		printf("      _________________________________________________________________\n");

		
}

void telacadastrouser(){

							
		printf("      *****************************************************************\n");
		printf("      *****************************************************************\n");
		printf("      ******************      Tela de cadastro      *******************\n");
		printf("      ******************        De Cliente          *******************\n");
		printf("      *****************************************************************\n");
		printf("      * Nome de Usuario:                               ****************\n");
		printf("      * Senha:                                         ****************\n");
		printf("      *                                                **             *\n");
		printf("      * selecione uma opcao:               (1)confirmar  (esc)<Voltar *\n");
		printf("      ***************************************************             *\n");
		printf("      *****************************************************************\n");
		
		

	 	

}

void telacadastrofun(){

		printf("      *****************************************************************\n");	
		printf("      *****************************************************************\n");
		printf("      *****************  Tela de cadastro  ****************************\n");
		printf("      *****************   De Administrador ****************************\n");
		printf("      *****************************************************************\n");
		printf("      * Nome de usuario:                                ***************\n");
		printf("      * Senha:                                          ***************\n");
		printf("      *                                                 **            *\n");
		printf("      * selecione uma opcao:                 (1)confirmar  (0)<Voltar *\n");
		printf("      ****************************************************            *\n");
		printf("      *****************************************************************\n");
		

}

int telarifa(int *vetor_id){
	
		int linha = 0;
		int coluna = 0;
		int cont = 0;
		int vetor_da_rifa[100];
		
		for(cont = 0; cont < 100; cont ++){
			vetor_da_rifa[cont] = cont+1;
	
		}
		
		system("cls");
		printf("************************************************************************\n");
		printf("*=========================   TELA RIFA   ==============================*\n");
		printf("************************************************************************\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                                                     (ESC) voltar     *\n");
		printf("*      (c) comprados (L)livres (r)reservados                           *\n");
		printf("************************************************************************\n");
		coluna = 6;
		linha =4;
		for(cont = 0; cont < 100; cont ++){//impreção dos numeros da rifa
			gotoxy(coluna,linha);
			if(vetor_da_rifa[cont]<=9){
				printf("( 0%i )",vetor_da_rifa[cont]);
			}
			else if(vetor_da_rifa[cont]<=99){
				printf("( %i )",vetor_da_rifa[cont]);
			}
			else{
				printf("( %i)",vetor_da_rifa[cont]);
			}
			coluna = coluna +6;
			if (coluna >=63){
				coluna = 6;
				linha++;
			}
		}
		coluna = 7;
		linha =4;
		for(cont = 0; cont <100; cont ++){//verifica se os numeros estão comprados ou não e mostra pro cliente
				gotoxy(coluna,linha);											
				if(vetor_id [cont] == 0){
					printf("L");
				}
				if(vetor_id[cont]== 1){
					printf("c");
				}
				if(vetor_id[cont]== 2){
					printf("r");
				}												
			coluna = coluna +6;
			if (coluna >=63){
				
				coluna = 7;
				linha++;
			}
			
		}
								    

}


void selecao_rifa(){
		printf("************************************************************************\n");
		printf("*                             RAFFLE                                   *\n");
		printf("************************************************************************\n");
		printf("************************************************************************\n");
		printf("*                                                                      *\n");
		printf("*                       oque vc deseja?                                *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("*                (1)comprar             (2)reservar                    *\n");
		printf("*                                                                      *\n");
		printf("*                                                                      *\n");
		printf("************************************************************************\n");
		printf("************************************************************************\n");
    
	
}
void nursorteado(){
	

		printf("      -----------------------------------------------------------------\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      *****************************************************************\n");
		printf("      *                   NUMEROS SORTEADOS:                          *\n");
		printf("      *                                                               *\n");
		printf("      *                                                               *\n");
		printf("      *                                                               *\n");
		printf("      *****************************************************************\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      -------------------------------------------------------(0)<Voltar\n");
		printf("      _________________________________________________________________\n");								

	
	
}

void teladoadm(){
	
		printf("      _________________________________________________________________\n");
		printf("      --------------------------- TELA --------------------------------\n");
		printf("      ----------------------- ADMINISTRADOR ---------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      ****** Acessar Rifa     Digite:<1>                        *******\n");
		printf("      ****** Sortear Premio   Digite:<2>                        *******\n");
		printf("      ****** Adicionar premio Digite<3>                         *******\n");
		printf("      ****** Verificar numeros e clientes registrados Digite<4> *******\n");
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      ------------------------------Escolha uma opcao:  ---------------\n");
		printf("      _________________________________________________________________\n");

		
}

void telaerro(){
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      *****************************************************************\n");
		printf("      *********           PAGINA INVALIDA                  ************\n");
		printf("      *********      SELECIONE UMA PAGINA VALIDA           ************\n");
		printf("      *****************************************************************\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      _________________________________________________________________\n");
    	gotoxy(62,9);
               
}

void telaconf(){
	
	
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      *****************************************************************\n");
		printf("      ********                                                *********\n");
		printf("      ********              CADASTRO CONFIRMADO               *********\n");
		printf("      ********                                                *********\n");
		printf("      *****************************************************************\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      _________________________________________________________________\n");
    	
}
void telaconfpremio(){
	
	
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      *****************************************************************\n");
		printf("      ********            CADASTRO CONFIRMADO              ************\n");
		printf("      *****************************************************************\n");
		printf("      ---------       DESEJA REALIZAR OUTRO CADASTRO?    --------------\n");
		printf("      __________     (1) SIM                    (2)NAO   ______________\n");
		printf("      -----------------------------------------------------------------\n");
}
void telaprimeiroacesso(){
		
		printf("      *****************************************************************\n");
		printf("      *****************     CADASTRAR      ****************************\n");
		printf("      *****************  PRIMEIRO ACESSO   ****************************\n");
		printf("      *****************************************************************\n");
		printf("      * Nome:                                          ***************\n");
		printf("      * SENHA:                                         ***************\n");
		printf("      ************************ (1)confirmar ***************************\n");
		printf("      ***************************************************             *\n");
		printf("      *****************************************************************\n");
		
	
	
}
void telacadaspremio(){
		
		printf("      *****************************************************************\n");
		printf("      *****************       CADASTRAR    ****************************\n");
		printf("      *****************        PREMIO      ****************************\n");
		printf("      *****************************************************************\n");
		printf("      * Nome do premio:                                 ***************\n");
		printf("      * Tipo:                                           *             *\n");
		printf("      * selecione uma opcao:               (1)confirmar * (0)<Voltar  *\n");
		printf("      ***************************************************             *\n");
		printf("      *****************************************************************\n");
		
	
	
}
void opcdepremio(){
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      *****************************************************************\n");
		printf("      *********  DIGITE A QUANTIDADE DE NUMEROS SORTEADOS:[   ]  ******\n");
		printf("      *********  SORTEAR NUMERO?    <1>SIM <2>VOLTAR             ******\n");
		printf("      *****************************************************************\n");
		printf("      -----------DIGITE UMA OPCAO [ ] _--------------------------------\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      _________________________________________________________________\n");
    
               
}
void verifica(){
	
	
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      -------------------------- VERIFICAR ----------------------------\n");
		printf("      _________________________________________________________________\n");
		printf("      ****   Verificar Clientes registrados  Digite:<1>            ****\n");
		printf("      ****   Verificar numeros comprados     Digite:<2>            ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                   voltar <0>            ****\n");
		printf("      _________________________________________________________________\n");
		printf("      -----------------------------------------------------------------\n");
		printf("      ------------------------------Escolha uma opcao:  ---------------\n");
		printf("      _________________________________________________________________\n");	
	
	
	
	
}

void vernum(){
	
		printf("      _________________________________________________________________\n");
		printf("      ----------------------------SORTEIO------------------------------\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ****                                                         ****\n");
		printf("      ------------------------------------------------(ESC) voltar-----\n");
		printf("      _________________________________________________________________\n");
}
void limpa_opcrifa(){
	
		gotoxy(2,15);
		printf("                                                                  ");
		gotoxy(2,17);
		printf("                                                                  ");
		gotoxy(2,19);
		printf("                                                                  ");
		gotoxy(29,17);
		printf("                    ");
}

main(){
	
	
	
	char user_primeiro_acesso[20];
	char senha_primeiro_acesso[10];
	int sorteia = 0;
	int vetorsorteia[100];
	int opc_rifa_compre = 0;
	int opc_rifa_reserve = 0;
	int confirma_login = 0;
	int compara_login_user = 0;
	int compara_login_senha = 0;
	int codigo_logado = 0;
	char tipo[30];//descriçaõ do premio da rifa
	int conf_cadastro = 0;//var que definira se o cadastro foi validado
	char verifica_usuario[20]; //variavel que recebe o neme cadastrado pra realizar a verificação
	int coluna = 0 ; //controle de coluna
	int linha = 0; //controle de linha 
	int vetor_da_rifa[100]; //printa o numeros da rifa
	int vetor_codigo[100]; //recebe o codigo do cliente pra realizar o controle de quem comprou
	int vetor_id[100]; //controla se o numero foi comprado/reservado/disponivel
	char user [10]; //recebe o nome do usuario pra verificação
	char password [10];//recebe a senha pra verificação
    int phone [9];//recebe o numero do telefone
	char nomepremio [15];//o nome do premio
  	int sair_cadastro= 0; //libera pra encerrar o cadastro
    int menu_premio= 0;//menu de cadastro do premio
    int menu_confr_premio = 0;//menu de confirmação do premio
    int sorteio = 0;//var do sorteio
    int cont = 0;//contador padrao
    int cont2 = 0;
    int opcrifa = 0;//menuno de seleçaõ da rifa
    int opadm = 0;//menu seleção do adiministrador
    int opadm2 = 0;//segunda variavel de seleção do administrador
    int opcsort = 0; //seleção do sorteio
	int menu1 =0; //menu inicial
	int log_cliente = 0;//seleçaõ da tela do cliente
	int log = 0; //seleção tela do administrador
	int menu_cadastro = 0;//seleção cadastro
	int menu_verifica = 0; //menu de verificação adm
	int menu_ver_cliente = 0;//menu de verificação do cliente
	int menu_ver_num = 0;//menu de verificação dos numeros comprados
	int menu_conf_cadastro = 0;//menu da verificação  de numeros comprados	
	int meus_numeros = 0;	
	int sele_compra = 0; //seleção de escolha como queira comprar um numero 
	int sele_compra2 = 0;
	int sele_reserva = 0;
	int novo_premio = 0;
	int valor_comprar = 0;
	int rec_cont_cli = 0;
	int conta_sorteio = 0;
	int controle= 0;
	int cont3 = 0;
	
	
	for(cont = 0; cont < 100; cont ++){
		vetor_da_rifa[cont] = cont;
		vetor_id[cont] = 0;	
		vetorsorteia [cont]= 0;
		vetor_codigo[cont]=-1;
		
	}
	
	for(cont = 0; cont < 100; cont ++){
	
		if(cont<3){
			
			vetor_codigo[cont]=0;
		}
		else if((cont>3)&&(cont<31)){
			
			vetor_codigo[cont]=0;
		}
		else if((cont>30)&&(cont<61)){
			
			vetor_codigo[cont]=1;
		}
		else if(cont>60){
			vetor_codigo[cont]=2;
		}
				
	}

	for(cont = 0; cont < 100; cont ++){
		vetor_id[cont]=1;
		if(cont==3){
			
		vetor_id[cont]=0;
		}
			
	}
	simular();
	
	
	telaprimeiroacesso();
	gotoxy(13,4);
	fflush(stdin);
	gets(user_primeiro_acesso);
	gotoxy(14,5);
	fflush(stdin);
	gets(senha_primeiro_acesso);
	system("cls");
	telaconf();
	sleep(1);
	system("cls");
	
    telaprincipal();
    fflush(stdin);
    menu1=getch();
    while(menu1 !=27){
        system("cls");   
        switch (menu1){
	        	
	            case 49:
	            	
	            	do{
					
						sellogin();
						gotoxy(54,10);
						fflush(stdin);
						log=getch();
						system("cls");
						
					
						 if(log==49){//login do cliente
							 do{
							 
							 	telalogin2();
								
								gotoxy(32,5);
								fflush(stdin);
								gets(user);
								gotoxy(22,6); 
								fflush(stdin);	
								gets(password);
								gotoxy(29,9);
								fflush(stdin);
								log_cliente=getch();
								
									compara_login_user=-1;
									compara_login_senha=-1;
									for(cont=0;cont<100;cont++){
										compara_login_user=strcmp(cliente[cont].nome_usuario,user);
										compara_login_senha=strcmp(cliente[cont].senha,password);
										if((compara_login_user==0)&&(compara_login_senha==0)){
											
											rec_cont_cli = cont;
											codigo_logado=cliente[cont].codigo;
											confirma_login=1;
											break;
										}
										
									}	
									if(log_cliente==49){//login do cliente
										if(confirma_login==1){
											system("cls");
											do{
											
													fflush(stdin);
													telarifa(&vetor_id);
																			
													gotoxy(4,15);
													printf("oq vc deseja ?");
													gotoxy(4,17);
													printf("(1) meus numeros");
													gotoxy(4,19);
													printf("(2) comprar numero");
													gotoxy(29,17);
													printf("(3) reservar numero");
													gotoxy(29,19);
													printf("(4) premios");
													gotoxy(60,22);
													fflush(stdin);
													opcrifa=getch();
													if(opcrifa==49){
														limpa_opcrifa();
																																		
														gotoxy(4,15);
														printf("meus numeros:");
														gotoxy(4,17);
														printf("(1) comprados");
														gotoxy(4,19);
														printf("(2) reservado");
														gotoxy(60,22);
														fflush(stdin);
														meus_numeros=getch();
																if(meus_numeros==49){
																	system("cls");
																	vernum();
																	gotoxy(27,2);
																	printf("comprados");
																	linha = 4;
																	coluna = 11;
																		for(cont =0;cont <100; cont ++){
																			
																		
																			gotoxy(coluna,linha);
																			printf("%i",cliente[codigo_logado].numeros_comprados[cont]);
																			coluna=coluna+3;
																			if(coluna== 40){
																				coluna=4;
																				linha++;
																			}
																			
																		
																		}
																	gotoxy(50,30);
																	getch();
																	system("cls");
																	
																}
																else if(meus_numeros==50){
																	system("cls");
																	vernum();
																	gotoxy(27,1);
																	printf("reservados");
																	linha=4;
																	coluna = 4;
																		for(cont =0;cont <100; cont ++){
																			gotoxy(coluna,linha);
																			
																			printf("%i",cliente[codigo_logado].numeros_reservados[cont]);
																			coluna=coluna+3;
																			if(coluna== 40){
																				coluna=4;
																				linha++;
																			}
																	
																		}
																	
																	gotoxy(50,30);
																	getch();
																	system("cls");
																	
																}
														
														
													}
													else if(opcrifa==50){
														
															while(opc_rifa_compre!=27){
																
																telarifa(&vetor_id);
																limpa_opcrifa();
																gotoxy(4,15);
																printf("digite o valor que deseja comprar:");
																gotoxy(4,17);
																fflush(stdin);
																scanf("%i",&valor_comprar);
																	if((valor_comprar>0)&&(valor_comprar<=100)){
																	
																			for(cont2=0;cont2<100;cont2++){
																				if(valor_comprar==cont2+1){
																					if((vetor_id[cont2]==1)||(vetor_id[cont2]==2)){
																						
																						if(vetor_codigo[cont2]==codigo_logado){
																							if(vetor_id[cont2]==1){
																								
																														
																								limpa_opcrifa();
																								gotoxy(4,15);
																								printf("o numero %i ja e seu!!!!",valor_comprar);
																								gotoxy(3,15);
																								getch();
																						
																							}
																							else if(vetor_id[cont2]==2){
																								
																								limpa_opcrifa();
																								gotoxy(4,15);
																								printf("numero %i voce ja reservou!!",valor_comprar);
																								gotoxy(4,17);
																								printf("deseja comprar?  (1)SIM (2)NAO");
																								sele_compra=getch();
																								if(sele_compra==49){
																																												
																									limpa_opcrifa();
																									gotoxy(4,15);
																									cliente[rec_cont_cli].numeros_comprados[cont_comprado]=valor_comprar;
																									cont_comprado++;
																									vetor_id[cont2]=1;
																									vetor_codigo[cont2]=cliente[rec_cont_cli].codigo;
																									telarifa(&vetor_id);
																									gotoxy(4,15);
																									printf("numero %i  comprado..boa sorte!!!",valor_comprar);
																									gotoxy(4,17);
																									printf("continuar comprando(1)        sair(ESC) ");
																									gotoxy(4,18);
																									opc_rifa_compre=getch();
																									
																								}
																								else if(sele_compra==50){
																																												
																									limpa_opcrifa();
																									gotoxy(4,15);
																									printf("nao esquece de comprar na proxima!!");
																									gotoxy(3,15);
																									getch();																																														
																								}
																								else{
																																												
																									limpa_opcrifa();
																									gotoxy(4,15);
																									printf("opcao invalida !!!");
																									gotoxy(3,15);
																									getch();																									
																								}
																								
																							}
																							
																						}
																						
																					}
																					else if(vetor_id[cont2]==0){
																						
																						limpa_opcrifa();
																						cliente[rec_cont_cli].numeros_comprados[cont_comprado]=valor_comprar;
																						cont_comprado++;
																						
																						vetor_id[cont2]=1;
																						telarifa(&vetor_id);
																						vetor_codigo[cont2]=cliente[rec_cont_cli].codigo;
																						gotoxy(4,15);
																						printf("numero %i comprado..boa sorte!!!",valor_comprar);
																						getch();
																						
																					}
																				}
																	
																			}
																		
																	}
																	else{
																		
																		limpa_opcrifa();
																		gotoxy(4,15);
																		printf("opcao invalida !!!");
																		gotoxy(5,15);
																		printf("selecione um numero de 1 a 100!!!");
																		gotoxy(3,15);
																		getch();
																	}
														
																limpa_opcrifa();
																gotoxy(4,17);
																printf("continuar comprando(1)        sair(esc) ");
																gotoxy(4,18);	
																fflush(stdin);			
																opc_rifa_compre=getch();														
															}
															
													
														
														
												 	}
													else if(opcrifa==51){
														
											
																while(opc_rifa_reserve!=27){
																	
																			
																	telarifa(&vetor_id);
																	limpa_opcrifa();
																	gotoxy(4,15);
																	printf("digite o valor que deseja reservar:");
																	gotoxy(4,17);
																	fflush(stdin);
																	scanf("%i",&valor_comprar);
																		
																	if((valor_comprar>0)&&(valor_comprar<=100)){
																			for(cont2=0;cont2<100;cont2++){
																				if(valor_comprar==cont2+1){
																					if((vetor_id[cont2]==1)||(vetor_id[cont2]==2)){
																						if(vetor_codigo[cont2]==codigo_logado){
																							if((vetor_id[cont2]==1)||(vetor_id[cont2]==2)){
																								
																															
																								limpa_opcrifa();
																								gotoxy(4,15);
																								printf("o numero %i ja e seu!!!!",valor_comprar);
																								gotoxy(3,15);
																								getch();
																								
																								
																							}
																						}
																					}
																					else if(vetor_id[cont2]==0){
																						
																						limpa_opcrifa();
																						cliente[rec_cont_cli].numeros_reservados[cont_reservado]=valor_comprar;
																						cont_reservado++;
																						vetor_id[cont2]=2;
																						telarifa(&vetor_id);
																						vetor_codigo[cont2]=cliente[rec_cont_cli].codigo;
																						gotoxy(4,15);
																						printf("numero %i reservado com sucesso!!!",valor_comprar);
																						gotoxy(4,17);
																						getch();
																					}	
																						
																						
																					
																					
																			
																								
																					
																				}
																			}
																		
																	}
																	else{
																		limpa_opcrifa();
																		gotoxy(4,15);
																		printf("opcao invalida !!!");
																		gotoxy(5,15);
																		printf("selecione um numero de 1 a 100!!!");
																		gotoxy(3,15);
																		getch();
																	}
																	limpa_opcrifa();
																	gotoxy(4,17);
																	printf("continuar reservando(1)        sair(esc) ");
																	gotoxy(4,18);				
																	opc_rifa_reserve=getch();				
																}			
																
																
															
														
															
														
														
													}
													else if(opcrifa==52){
														system("cls");
														vernum();
														gotoxy(28,1);
														printf("premios");
															linha=4;
															coluna = 12;
															for(cont =0;cont <100; cont ++){
															
																	gotoxy(coluna,linha);
																if(premios[cont].codigo==cont){
																	gotoxy(coluna,linha);
																	puts(premios[cont].nome_premio);
																	
																
																	linha++;
																
																
																}
																if(linha== 40){
																		coluna=11;
																		linha=4;
																}
															}
														
														gotoxy(50,30);
														getch();
														system("cls");
													}
													
													
													
													telarifa(&vetor_id);
													limpa_opcrifa();
													gotoxy(4,17);
													printf("continuar na rifa (1)        sair(2) ");
													gotoxy(4,18);				
													opcrifa=getch();
											
											}while(opcrifa!=27);//while rifa
	//											else{
	//												
	//												telaerro();
	//												sleep(1);
	//												system("cls");
	//											}
										}
										else{
											gotoxy(25,4);
											printf(" senha ou user incorreto ");
											sleep(1);
											gotoxy(25,4);
											printf("*************************");
											system("cls");
										}
									}//if menu cliente
								system("cls");
							 }while(log_cliente!=27);//do while log_cliente
						}//menu login cliente
						 else if(log==50){
							do{
							
							 	telalogin();
								fflush(stdin);
								gotoxy(32,5);
								gets(user);
								fflush(stdin);
								gotoxy(22,6); 	
								gets(password);
								gotoxy(29,9);
								fflush(stdin);
							 	opadm=getch();
							 	system("cls");
							 	
									compara_login_user=-1;
									compara_login_senha=-1;
								for(cont=0;cont<100;cont++){
									compara_login_user=strcmp(adm[cont].nome_usuario,user);
									compara_login_senha=strcmp(adm[cont].senha,password);
									if((compara_login_user==0)&&(compara_login_senha==0)){
										
										rec_cont_cli = cont;
										codigo_logado=cliente[cont].codigo;
										confirma_login=1;
										break;
									}
									
								}
								for(cont=0;cont<100;cont++){
									compara_login_user=strcmp(user_primeiro_acesso,user);
									compara_login_senha=strcmp(senha_primeiro_acesso,password);
									if((compara_login_user==0)&&(compara_login_senha==0)){
										
										rec_cont_cli = cont;
										codigo_logado=cliente[cont].codigo;
										confirma_login=1;
										break;
									}
									
								}	
							 	if(confirma_login==1){
								 	
								 	do{
										 
									 	if(opadm==49){//tela do adiministrador
									 		teladoadm();
									 		gotoxy(54,10);
									 		fflush(stdin);
									 		opadm2=getch();
									 		system("cls");
									 		
									 		if(opadm2==49){
												fflush(stdin);
												telarifa(&vetor_id);
												gotoxy(21,19);
												opcrifa=getch();
												fflush(stdin);
												system("cls");					 			
									 		
									 			
											 }
											 else if(opadm2==50){
											 	
											 	opcdepremio();
											 	gotoxy(60,5);
												 fflush(stdin);
											 	scanf("%i",&sorteio);
											 	gotoxy(35,8);
												fflush(stdin);
											 	opcsort=getch();
											 	system("cls");
											 	
											 	if(opcsort==49){
											 		
											 		
	//										 		verificar_sorteio(&vetorsorteia[cont],sorteio);
														srand(time(NULL));
														for (cont = 0; cont <sorteio;cont ++){
																
															vetorsorteia[cont] =1+(rand()%100);
															
															for(cont2 = 0; cont2 <100; cont2 ++){
																
																	
															
																if(cont>0){
															
																	vetorsorteia[cont]=validaNumero(vetorsorteia[cont],vetorsorteia,cont);
															
																}
																
												
															}  
														
												
														}
													linha = 2;
													coluna = 11;
													conta_premio=0;
													
													vernum();										 		
											 		for(cont=0; cont<100;cont ++){
											 			for(cont2=0;cont2<100;cont2++){ 
											 				controle=cont2+1;
											 				if(vetorsorteia[cont]==cont2+1){
											 					for(cont3=0;cont<100;cont3++){
																 
												 					if(vetor_codigo[cont2]==cliente[cont3].codigo){
												 							
												 						gotoxy(11,linha);
												 						sleep(1);
												 						printf("numero:%i  ganhador:%s   premio:%s ",vetorsorteia[cont],cliente[cont3].nome_usuario,premios[conta_premio].nome_premio);
																	 	linha=linha+2;
												 						conta_premio++;
												 					
												 						break;
												 						
												 						
																	 }
																	 
											 					}
											 					
															 }
															 
											 				
											 				
														 }
															
//											 	
//											 			
													 }
												
												 getchar();	
												 system("cls");	
												 }
												 			 
											}
											
											 else if(opadm2==51){
											 	
											 	for(cont=0;cont<1;cont++){
												 
												 	telacadaspremio();
												 	premios[conta_premio].codigo=conta_premio;
												 	gotoxy(23,4);
												 	fflush(stdin);
												 	gets(premios[conta_premio].nome_premio);
												 	gotoxy(13,5);
												 	fflush(stdin);
												 	scanf("%f",&premios[conta_premio].valor);
												 	fflush(stdin);
												 	gotoxy(28,6);
												 	menu_confr_premio=getch();
												 	fflush(stdin);
												 	system("cls");
												 	
												 	if(menu_confr_premio==49){
												 		telaconfpremio();
														gotoxy(62,9);
													 	fflush(stdin);
														novo_premio=getch();
														if(novo_premio==49){
															cont--;
															conta_premio++;
															system("cls");
															
														}
														else if(novo_premio==50){
														
															cont++;
															system("cls");
														}
														
													}
												
												}
											 }
									
	
													 	
												  
											
										}
										 	
										
									 }while(opadm2!=27);
								}
								else{
									
									gotoxy(25,4);
									printf(" senha ou user incorreto ");
									sleep(1);
									gotoxy(25,4);
									printf("*************************");
									system("cls");
								}
						
							}while(opadm!=27);
						}
				
					}while(log!=27);//while login
					break;
	            case 50:
	            	
					do{
						
						telacadastro();
						gotoxy(54,10);
						fflush(stdin);
						menu_cadastro=getch();
						system("cls");
						
							switch(menu_cadastro){
							
								case 49:
									telacadastrouser();
									do{
									
										
										cliente[conta_cliente].codigo=conta_adm;
										gotoxy(24,5);
										fflush(stdin);
										gets(user);
										strcpy(cliente[conta_cliente].nome_usuario, user);
										gotoxy(14,6);
										fflush(stdin);
										gets(password);
										strcpy(cliente[conta_cliente].senha, password);
										fflush(stdin);
										coluna = 17;
		
		//								
										fflush(stdin);
										gotoxy(28,8);
										fflush(stdin);
										menu_conf_cadastro=getch();	
										system("cls");
										conf_cadastro=-1;
										if(menu_conf_cadastro==49){	
											for(cont=0;cont<100;cont++){
										
												conf_cadastro = strcmp(cliente[cont].nome_usuario, user);
											
											}	
											if (conf_cadastro!=0){
												conta_cliente++;
												telaconf();
												sleep(1);
												sair_cadastro=27;
												system("cls");
												break;
											
											}
											
										}
					
									
									}while(sair_cadastro!=27);
								break;
									case 50:
									telacadastrofun();
										
									do{
									
										
										adm[conta_adm].codigo=conta_adm;
										gotoxy(24,5);
										fflush(stdin);
										gets(user);
										strcpy(adm[conta_adm].nome_usuario, user);
										gotoxy(14,6);
										fflush(stdin);
										gets(password);
										strcpy(adm[conta_adm].senha, password);
										fflush(stdin);
										coluna = 17;
		
		//								
										fflush(stdin);
										gotoxy(28,8);
										fflush(stdin);
										menu_conf_cadastro=getch();	
										system("cls");
										conf_cadastro=-1;
										if(menu_conf_cadastro==49){	
											for(cont=0;cont<100;cont++){
										
												conf_cadastro = strcmp(adm[cont].nome_usuario, user);
											
											}	
											if (conf_cadastro!=0){
												conta_adm++;
												telaconf();
												sleep(1);
												sair_cadastro=27;
												system("cls");
												break;
											
											}
											
										}
					
									
									}while(sair_cadastro!=27);

							}
		                 

					
	               }while(menu_cadastro!=27);
	             break;
	            default:    
					telaerro();
					sleep(1);
					break;
				      
	       	 }// switch   
		system("cls");
	    telaprincipal();
	    fflush(stdin);
	    menu1=getch();
		}//while 

 
    }//main



