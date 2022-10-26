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

int main(){

   float dia, tipo_veiculo;
    char M,CP,CG;
    int placa, opcao, veiculos, horas=0, minutos=0, segundos=0, horasatt=0, minutosatt=0, segundosatt=0, h, m, s, Hatt, Matt, Satt, calculo1;

do{
    printf("------------Seja Bem Vindo ao Sistema de Estacionamento------------\n\n");
    printf("********************************MENU********************************\n\n");
    printf("Selecione a opcao desejada:\n");
    printf("1 - Registrar Movimento\n");
    printf("2 - Exibir Relatorio\n");
    printf("3 - Creditos\n");
    printf("4 - Encerrar\n");
    printf("-------------------------------------------------------------------\n");

    scanf("%i", &opcao);

    if(opcao==1){

        printf("Selecione o tipo de veiculo para ser registrado.\n1 - Moto\n2 - Carro pequeno\n3 - Carro grande\n");
        scanf("%i", &veiculos);
        printf("Coloque o horario de entrada do veiculo.\nHoras: ");
        scanf("%i", &horas);
        printf("Minutos: ");
        scanf("%i", &minutos);
        printf("Segundos: ");
        scanf("%i", &segundos);

        if(horas > horasatt && minutos > minutosatt && segundos > segundosatt){

            horasatt = horas;
            minutosatt = minutos;
            segundosatt = segundos;
        }

        printf("Coloque o horario de saide do veiculo.\nHoras: ");
        scanf("%i", &horas);
        printf("Minutos: ");
        scanf("%i", &minutos);
        printf("Segundos: ");
        scanf("%i", &segundos);

        Hatt = horasatt - horas;
        Matt = minutosatt - minutos;
        Satt = segundosatt - segundos;

        if(veiculos == 1){

            if (Hatt >= 1){

                calculo1 = Hatt * 4;
            }
        }
        if(veiculos == 2){

                
        }

        if(veiculos == 3){

        }
    }
    if(opcao==2){


    }
    if(opcao==3){

        printf("copyright © 2022 todos os direitos reservados,\n- Eduardo de Andrade Bomfim Jr\n- Mari Alessandra Santana de Sousa\n- Felipe Soares Lisboa de Melo\n- Eider Souza Costa dos Santos\n- Bianca Hellen Oliveira Silva\n- Everton Jesus dos Santos\n\n");
        system("Pause");
    }
}
    while(opcao!=4);
    
return 0;
}