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
    int placa, opcao, veiculos, horas=0, minutos=0, segundos=0, horasatt=0, minutosatt=0, segundosatt=0, h=0, m=0, s=0, Hatt=0, Matt=0, Satt=0, calculo1;

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
        printf("Coloque o horario de entrada do veiculo: (Horas:Minutos:Segundos)\n");
        scanf("%i:%i:%i", &horas, &minutos, &segundos);
          
        printf("Coloque o horario de saida do veiculo: (Horas:Minutos:Segundos)\n");
        scanf("%i:%i:%i", &horasatt, &minutosatt, &segundosatt);
       
        Hatt = horasatt - horas;
        Matt = minutosatt - minutos;
        Satt = segundosatt - segundos;

        if(Hatt < 0){

            h = Hatt * -1;
            printf("O tempo que o veiculo ficou no estacionamento foi: %.2d:%.2d:%.2d\n", h, Matt, Satt);
        } 
        if(Matt < 0){

            m = Matt * -1;
            printf("O tempo que o veiculo ficou no estacionamento foi: %.2d:%.2d:%.2d\n", Hatt, m, Satt);
        }
        if(Satt < 0){

            s = Satt * -1;
            printf("O tempo que o veiculo ficou no estacionamento foi: %.2d:%.2d:%.2d\n", Hatt, Matt, s);
        }
        else if(Hatt > 0 && Matt > 0 && Satt > 0){
        printf("O tempo que o veiculo ficou no estacionamento foi: %.2d:%.2d:%.2d\n", h, m, s);
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