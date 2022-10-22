#include <stdio.h>

int main(){

    int horas=0, minutos=0, segundos=0, horasatt=0, minutosatt=0, segundosatt=0, h, m, s, Hatt, Matt, Satt, identificacao;

    printf("Insira a numeracao do veiculo: ");
    scanf("%i", &identificacao);
    printf("Insira o horario de entrada do veiculo.\nHoras: ");
    scanf("%i", &horas);
    printf("Minutos: ");
    scanf("%i", &minutos);
    printf("Segundos: ");
    scanf("%i", &segundos);

    if (horas > horasatt && minutos > minutosatt && segundos > segundosatt){

        horasatt = horas;
        minutosatt = minutos;
        segundosatt = segundos;
    }
    printf("Insira o horario de sai­da do veiculo.\nHoras: ");
    scanf("%i", &horas);
    printf("Minutos: ");
    scanf("%i", &minutos);
    printf("Segundos: ");
    scanf("%i", &segundos);
    
    h = horasatt - horas;
    m = minutosatt - minutos;
    s = segundosatt - segundos;

     if(h < 0){

        Hatt = h * -1;
    } if(m < 0){

        Matt = m * -1;
    }if(s < 0){

        Satt = s * -1;
    }

    printf("O veiculo numero %i ficou no estacionamento por %.2i:%.2i:%.2i", identificacao, Hatt, Matt, Satt);
}