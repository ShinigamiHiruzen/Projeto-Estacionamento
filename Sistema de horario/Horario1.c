#include<stdio.h>
#include <stdlib.h>

int main(){
	
	int hrE, minE, segE, hrS, minS, segS, hrF, minF, segF;
	
    do{
    printf("Digite o Horario de Entrada:(HORAS:MINUTOS:SEGUNDOS)\n");
	scanf("%i:%i:%i", &hrE, &minE, &segE);
	}while(hrE<0 || hrE>23 || minE<0 || minE>59 || segE<0 || segE>59);

    do{
	printf("Digite o Horario de Saida:(HORAS:MINUTOS:SEGUNDOS)\n");
	scanf("%i:%i:%i", &hrS, &minS, &segS);
	}while(hrS<0 || hrS>23 || minS<0 || minS>59 || segS<0 || segS>59);

	hrF = hrS - hrE;
    minF = minS - minE;
    segF = segS - segE;

    if(segF < 0){
        minF = minF - 1;
        segF = segF + 60;
    }
    if(minF < 0){
        hrF = hrF - 1;
        minF = minF + 60;
    }
	
	printf("O veiculo ficou no estacionamento por: %i:%i:%i", hrF, minF, segF);
		
	return 0;
}