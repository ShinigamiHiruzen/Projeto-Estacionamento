#include<stdio.h>
#include<stdlib.h>

/*Componentes da Equipe:
copyright © 2022 todos os direitos reservados,

- Eduardo de Andrade Bomfim Jr
- Mari Alessandra Santana de Sousa
- Felipe Soares Lisboa de Melo
- Eider Souza Costa dos Santos
- Bianca Hellen Oliveira Silva
- Everton Jesus dos Santos
*/

//Função main
int main(){
	
	//Variaveis
    float dia, tipo_veiculo;
    char M,CP,CG;
    int placa, opcao, veiculos, horas=0, minutos=0, segundos=0, horasatt=0, minutosatt=0, segundosatt=0, h, m, s, Hatt, Matt, Satt, calculo1;

//Laço de repetição do menu inicial	
do{
	
	//Menu
    printf("------------Seja Bem Vindo ao Sistema de Estacionamento------------\n\n");
    printf("********************************MENU********************************\n\n");
    printf("Selecione a opcao desejada:\n");
    printf("1 - Registrar Movimento\n");
    printf("2 - Exibir Relatorio\n");
    printf("3 - Creditos\n");
    printf("4 - Encerrar\n");
    printf("-------------------------------------------------------------------\n");
    printf("R: ");
    scanf("%i", &opcao);

	//Condição 1 para registrar movimento no estacionamento
    if(opcao==1){
		
		//Essa parte vai pegar os horarios de entrada
        printf("Selecione o tipo de veiculo para ser registrado.\n1 - Moto\n2 - Carro pequeno\n3 - Carro grande\n");
        scanf("%i", &veiculos);
        printf("Coloque o horario de entrada do veiculo.\nHoras: ");
        scanf("%i", &horas);
        printf("Minutos: ");
        scanf("%i", &minutos);
        printf("Segundos: ");
        scanf("%i", &segundos);
		
		//Essa condição vai atribuir os valores dos horarios a novas variaveis
        if(horas > horasatt && minutos > minutosatt && segundos > segundosatt){

            horasatt = horas;
            minutosatt = minutos;
            segundosatt = segundos;
        }
		
		//Essa parte vai pegar os horarios de saida
        printf("Coloque o horario de saida do veiculo.\nHoras: ");
        scanf("%i", &horas);
        printf("Minutos: ");
        scanf("%i", &minutos);
        printf("Segundos: ");
        scanf("%i", &segundos);

        Hatt = horasatt - horas;
        Matt = minutosatt - minutos;
        Satt = segundosatt - segundos;
		
		//Vai efetuar os calculos de informacao da classificacao do carro
        if(veiculos == 1){

            if (Hatt >= 1){

                calculo1 = Hatt * 4;
            }
        }
        //Vai efetuar os calculos de informacao da classificacao da moto
        if(veiculos == 2){

                
        }
		//Vai efetuar os calculos de informacao da classificacao 
        if(veiculos == 3){

        }
    }
    //Condição 2 para exibir o relatório
    if(opcao==2){


    }
    //Condição 3 para mostrar os créditos do código
    if(opcao==3){

        printf("copyright © 2022 todos os direitos reservados,\n- Eduardo de Andrade Bomfim Jr\n- Mari Alessandra Santana de Sousa\n- Felipe Soares Lisboa de Melo\n- Eider Souza Costa dos Santos\n- Bianca Hellen Oliveira Silva\n- Everton Jesus dos Santos\n\n");
        system("Pause");
    }
}
	//Finaliza o código
    while(opcao!=4);
    
return 0;
}
