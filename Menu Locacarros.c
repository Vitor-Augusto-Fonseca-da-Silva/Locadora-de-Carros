//BIBLIOTECAS//
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

//FUN��O DESCONTO//
float calculo(float x,float y,float z){
	float resultado,valor_final;
	
	resultado = x * y;
	
	valor_final = resultado - (resultado * z);
	
	return valor_final;
}

//FUN��O PARCELADO//
float parcelado(float x,float y){
	float valor_parcelado;
	
	valor_parcelado = x / y;
	
	return valor_parcelado;
}

//FUN��O PRINCIPAL//
int main() {
	
	//DECLARA��O DE VARIAVEIS//
	setlocale(LC_ALL, "Portuguese");
	char nome[40];
	char telefone[40];
	int w,x,y,z,resp = 1;
	float resultado,diaria,num_parcela,valor_parcelado,desconto = 0.08,valor_final,grupo1 = 92.69,grupo2 = 95.69,grupo3 = 116.70;
	
	//INICIO DO WHILE//
		while(resp < 2) {
			
	//MENU//
	printf("\nBem-vindo a Locacarros!");
	printf("\nEscolha uma das op��es abaixo:");
	printf("\n1 - Informa��es da Empresa\n2 - Loca��o de Carros\n3 - Sair\n");
	scanf("%d", &x);
	system("cls");
	
	
	//INICIO DO SWITCH X//
	switch(x) {
		case 1:
			//INFORMA��ES DA EMPRESA//
			printf("\nBem vindo a guia de informa��o da Locacarros!\n");
			printf("\nSobre: \nA locacarros � uma empresa que atua no mercado ha 15 anos, sendo uma das melhores empresas de alugueis de carros.");
			printf("\nN�o cobremos taxa de servi�o e sempre buscamos o conforto para nossos clientes.\n");
			printf("\nTelefone: \n(85)99987-9987\n");
			printf("\nEndere�o: \nRua Cavalcante Peixoto, n� 1225, Jardim Americano\n");
			break;
		case 2:
			//LOCA��O DE CARROS//
			printf("\nBem vindo a guia de loca��o de carros da Locacarros!\n");
			printf("\nGrupo A: R$92,69\n\nGrupo B:R$95,69\n\nGrupo C:R$116,70\n");
			printf("\nSelecione uma das op��es abaixo:\n");
			printf("\n1 - Grupo A: Renault KWID e Fiat Mobi\n \n2 - Grupo B: Renault Logan, Chevrolet Onix e Hyandai HB20 S\n \n3 - Grupo C: Fiat Cronos e Volkswagen Virtus\n");
			scanf("%d", &y);
			system("cls");
			//INICIO DO SWITCH Y//
			switch(y) {
				case 1:
					//GRUPO A//
					printf("\nGrupo A selecionado\n");
					printf("\nEscolha uma das op��es abaixo:\n");
					printf("\n1 - Renault KWID\n \n2 - Fiat Mobi\n");
					scanf("%d", &z);
					system("cls");
					//INICIO DO SWITCH Z1//
					switch(z) {
						case 1:
							//RENAULT KWID//
							printf("\nRenault KWID selecionado\n");
							printf("\nDigite o numero de diarias:\n");
							scanf("%f",&diaria);
							valor_final = calculo(grupo1,diaria,desconto);
							printf("\nEscolha uma das op��es abaixo:\n");
							printf("\n1 - Pagamento a vista\n \n2 - Pagamento Parcelado\n");
							scanf("%d",&w);
							system("cls");
							if(w<2) {
								printf("\nPagamento a vista no valor de R$%.2f\n",valor_final);
							} 
								else{
									printf("\nPagamento Parcelado no valor de R$%.2f\n",valor_final);
									printf("\nDeseja dividir em quantas parcelas dentro do limite de 5 vezes sem juros?\n");
									scanf("%f",&num_parcela);
									valor_parcelado = parcelado(valor_final,num_parcela);
									printf("\nSera dividido em %.0f parcelas de R$%.2f\n",num_parcela,valor_parcelado);
								}
								break;
							
						case 2:
							//FIAT MOBI//
							printf("\nFiat Mobi selecionado\n");
							printf("\nDigite o numero de diarias:\n");
							scanf("%f",&diaria);
							valor_final = calculo(grupo1,diaria,desconto);
							printf("\nEscolha uma das op��es abaixo:\n");
							printf("\n1 - Pagamento a vista\n \n2 - Pagamento Parcelado\n");
							scanf("%d",&w);
							system("cls");
							if(w<2) {
								printf("\nPagamento a vista no valor de R$%.2f\n",valor_final);
							} 
								else{
									printf("\nPagamento Parcelado no valor de R$%.2f\n",valor_final);
									printf("\nDeseja dividir em quantas parcelas dentro do limite de 5 vezes sem juros?\n");
									scanf("%f",&num_parcela);
									valor_parcelado = parcelado(valor_final,num_parcela);
									printf("\nSera dividido em %.0f parcelas de R$%.2f\n",num_parcela,valor_parcelado);
								}
								break;
					//FIM DO SWITCH Z1//
					}
					break;
						case 2:
							//GRUPO B//
							printf("\nGrupo B selecionado\n");
							printf("\nEscolha uma das op��es abaixo:\n");
							printf("\n1 - Renault Logan\n \n2 - Chevrolet Onix\n \n3 - Hyandai HB20 S\n");
							scanf("%d", &z);
							system("cls");
							switch(z) {
								case 1:
									//RENAULT LOGAN//
									printf("\nRenault Logan selecionado\n");
									printf("\nDigite o numero de diarias:\n");
									scanf("%f",&diaria);
									valor_final = calculo(grupo2,diaria,desconto);
									printf("\nEscolha uma das op��es abaixo:\n");
									printf("\n1 - Pagamento a vista\n \n2 - Pagamento Parcelado\n");
									scanf("%d",&w);
									system("cls");
							if(w<2) {
								printf("\nPagamento a vista no valor de R$%.2f\n",valor_final);
								} 
								else{
									printf("\nPagamento Parcelado no valor de R$%.2f\n",valor_final);
									printf("\nDeseja dividir em quantas parcelas dentro do limite de 5 vezes sem juros?\n");
									scanf("%f",&num_parcela);
									valor_parcelado = parcelado(valor_final,num_parcela);
									printf("\nSera dividido em %.0f parcelas de R$%.2f\n",num_parcela,valor_parcelado);
								}
								break;
								case 2:
									//CHEVROLET ONIX//
									printf("\nChevrolet Onix selecionado\n");
									printf("\nDigite o numero de diarias:\n");
									scanf("%f",&diaria);
									valor_final = calculo(grupo2,diaria,desconto);
									printf("\nEscolha uma das op��es abaixo:\n");
									printf("\n1 - Pagamento a vista\n \n2 - Pagamento Parcelado\n");
									scanf("%d",&w);
									system("cls");
							if(w<2) {
								printf("\nPagamento a vista no valor de R$%.2f\n",valor_final);
								} 
								else{
									printf("\nPagamento Parcelado no valor de R$%.2f\n",valor_final);
									printf("\nDeseja dividir em quantas parcelas dentro do limite de 5 vezes sem juros?\n");
									scanf("%f",&num_parcela);
									valor_parcelado = parcelado(valor_final,num_parcela);
									printf("\nSera dividido em %.0f parcelas de R$%.2f\n",num_parcela,valor_parcelado);
								}
								break;
								case 3:
									//HYANDAI HB20 S//
									printf("\nHyandai HB20 S selecionado\n");
									printf("\nDigite o numero de diarias:\n");
									scanf("%f",&diaria);
									valor_final = calculo(grupo2,diaria,desconto);
									printf("\nEscolha uma das op��es abaixo:\n");
									printf("\n1 - Pagamento a vista\n \n2 - Pagamento Parcelado\n");
									scanf("%d",&w);
									system("cls");
							if(w<2) {
								printf("\nPagamento a vista no valor de R$%.2f\n",valor_final);
								} 
								else{
									printf("\nPagamento Parcelado no valor de R$%.2f\n",valor_final);
									printf("\nDeseja dividir em quantas parcelas dentro do limite de 5 vezes sem juros?\n");
									scanf("%f",&num_parcela);
									valor_parcelado = parcelado(valor_final,num_parcela);
									printf("\nSera dividido em %.0f parcelas de R$%.2f\n",num_parcela,valor_parcelado);
								}
								break;
					//FIM DO SWITCH Z2//
					}
					break;
						case 3:
							//GRUPO C//
							printf("\nGrupo C selecionado\n");
							printf("\nEscolha uma das op��es abaixo:\n");
							printf("\n1 - Fiat Cronos\n \n2 - Volkswagen Virtus\n");
							scanf("%d", &z);
							system("cls");
							//INICIO DO SWITCH Z3//
							switch(z) {
								case 1:
									//FIAT CRONOS//
									printf("\nFiat Cronos selecionado\n");
									printf("\nDigite o numero de diarias:\n");
									scanf("%f",&diaria);
									valor_final = calculo(grupo3,diaria,desconto);
									printf("\nEscolha uma das op��es abaixo:\n");
									printf("\n1 - Pagamento a vista\n \n2 - Pagamento Parcelado\n");
									scanf("%d",&w);
									system("cls");
							if(w<2) {
								printf("\nPagamento a vista no valor de R$%.2f\n",valor_final);
								} 
								else{
									printf("\nPagamento Parcelado no valor de R$%.2f\n",valor_final);
									printf("\nDeseja dividir em quantas parcelas dentro do limite de 5 vezes sem juros?\n");
									scanf("%f",&num_parcela);
									valor_parcelado = parcelado(valor_final,num_parcela);
									printf("\nSera dividido em %.0f parcelas de R$%.2f\n",num_parcela,valor_parcelado);
								}
								break;
								case 2:
									//VOLKSWAGEN VIRTUS//
									printf("\nVolkswagen Virtus selecionado\n");
									printf("\nDigite o numero de diarias:\n");
									scanf("%f",&diaria);
									valor_final = calculo(grupo3,diaria,desconto);
									printf("\nEscolha uma das op��es abaixo:\n");
									printf("\n1 - Pagamento a vista\n \n2 - Pagamento Parcelado\n");
									scanf("%d",&w);
									system("cls");
							if(w<2) {
								printf("\nPagamento a vista no valor de R$%.2f\n",valor_final);
								} 
								else{
									printf("\nPagamento Parcelado no valor de R$%.2f\n",valor_final);
									printf("\nDeseja dividir em quantas parcelas dentro do limite de 5 vezes sem juros?\n");
									scanf("%f",&num_parcela);
									valor_parcelado = parcelado(valor_final,num_parcela);
									printf("\nSera dividido em %.0f parcelas de R$%.2f\n",num_parcela,valor_parcelado);
								}
								break;
							//FIM DO SWITCH Z3
							}
							break;
			//FIM DO SWITCH Y//		
			}
			//CONCLUS�O DO PEDIDO//
			printf("\nPara concluir o atendimento insira os seguintes dados:\n");
			printf("\nInsira seu nome a seguir:\n");
			scanf("%s",&nome);
			printf("\nInsira seu numero para contato:\n");
			scanf("%s",&telefone);
			system("cls");
			printf("\nCARRO ALUGADO!!!\n");
			printf("\n--------------------\n");
			printf("\nVOLTE SEMPRE\n");
			printf("\n--------------------\n");
			break;
	//FIM DO SWITCH X//	
	case 3:
		printf("Volte Sempre\n");
		exit(0);
		break;
			default:
		    	printf("Op��o Invalida!\n");	
	}
	//FIM DO WHILE//
		printf("\nDeseja voltar ao menu?");
		printf("\n1-Sim\n2-N�o\n");
		scanf("%d", &resp);
		system("cls");
	}
	
//FINAL DO PROGRAMA//	
	return 0;
}
