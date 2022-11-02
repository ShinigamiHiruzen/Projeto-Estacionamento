#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float PrecoProdutos, Sonhos, Churros, CF, Valor;
	int Pedidos, CodgoPedido, QuantVezes, Clientes, Vezes=0;
	int QuantSonhos = 0, QuantChurros = 0, QuantCF = 0;
	
	printf("Quantos Clientes sao?");
	scanf("%i", &Clientes);
	
	while(Clientes>Vezes){
	Vezes = Vezes + 1;
	do{

		printf("\nCARDAPIO \n 1 | Sonho - R$3.50 \n 2 | Churros - R$4.50 \n 3 | Coxinha de Frango - R$5.50 \n Digite 9 para encerrar");	
		printf("\nDigite o codigo do produto: ");
		scanf("%i", &CodgoPedido);
		
		Sonhos = 3.50;
		Churros = 4.50;
		CF = 5.50;
	
		
		switch (CodgoPedido){
			case 1: printf("Qual a quantidade de Sonhos?\n");
					scanf("%i", &QuantSonhos);
					Valor = QuantSonhos * Sonhos;
					printf("Valor dos produtos: %.2f\n", Valor);break;
			
			case 2: printf("Qual a quantidade de Churros?\n");
					scanf("%i", &QuantChurros);
					Valor = QuantChurros * Churros;
					printf("Valor dos produtos: %.2f\n", Valor);break;
			
			case 3: printf("Qual a quantidade de Coxinhas?\n");
					scanf("%i", &QuantCF);
					Valor = QuantCF * CF;
					printf("Valor dos produtos: %.2f\n", Valor);break;
			default: printf("Opcao invalida\n");Valor=0;				
			
		}
		
		PrecoProdutos = PrecoProdutos + Valor;
	}while(CodgoPedido != 9);
	}
	printf("Valor a se pagar: %.2f", PrecoProdutos);
	
	return 0;
}