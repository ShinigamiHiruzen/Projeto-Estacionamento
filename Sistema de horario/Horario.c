#include<stdio.h>
#include<stdlib.h>

/*Componentes da Equipe:
copyright � 2022 todos os direitos reservados,
- Eduardo de Andrade Bomfim Jr
- Mari Alessandra Santana de Sousa
- Felipe Soares Lisboa de Melo
- Eider Souza Costa dos Santos
- Bianca Hellen Oliveira Silva
- Everton Jesus dos Santos
*/

//Fun��o main
int main(){
	
	//Variaveis
    float valor_cobrado, valor_pago, valor_correto, valor_a_devolver, valor_a_pagar;
    int opcao, opcao2;
    float valor_total=0, valor_total_cobrado=0;
    int codigo_veiculo, dia=0;
    int hrE, minE, segE, hrS, minS, segS, hrF, minF, segF;
    //A = Motos, B = Carros pequenos e C = Carros grandes
    float a=0, b=0, c=0, carrospequenos=0, motos=0, carrosgrande=0, carrospequenos1=0, motos1=0, carrosgrande1=0;

//La�o de repeti��o do menu inicial	
do{
	
	//Menu
    printf("------------Seja Bem Vindo ao Sistema de Estacionamento------------\n\n");
    printf("*MENU*\n\n");
    printf("Selecione a opcao desejada:\n");
    printf("1 - Registrar Movimento\n");
    printf("2 - Exibir Relatorio\n");
    printf("3 - Creditos\n");
    printf("4 - Encerrar\n");
    printf("-------------------------------------------------------------------\n");
    printf("R: ");
    scanf("%i", &opcao);

	//Condi��o 1 para registrar movimento no estacionamento
    switch (opcao){
      case 1:
    // Contagem do Mes
    for(dia=1; dia<=30; dia++){
    	
    	if(dia > 1){
    		
    		valor_total = 0;
		}
    	
    	do{
		
		
        printf("Dia %i", dia);
		printf("\n");

        printf("Digite o Codigo do Veiculo:\n");
        printf("R: ");
        scanf("%i", &codigo_veiculo);
        
        if(codigo_veiculo == -1){
        	
        	printf("Dia encerrado\n");
		}else{
		do{
			
        printf("Selecione o Tipo de Veiculo:\n");
        printf("1 - Moto\n");
        printf("2 - Carro Pequeno\n");
        printf("3 - Carro Grande\n");
        printf("-------------------------------------------------------------------\n");
        printf("R: ");
        scanf("%i", &opcao2);
        if(opcao2 == 1){
        	
        	a++;
		}
		else if(opcao2 == 2){
			
			b++;
		}
		else if(opcao2 == 3){
			
			c++;
		}
		if (opcao2 != 1 && opcao2 !=2 && opcao2 != 3){
			
			printf("Valor invalido\n");
		}
			}while(opcao2 != 1 && opcao2 != 2 && opcao2 != 3);
		
    // Tipo de Veiculo: MOTO    
        switch(opcao2){
            case 1:
            printf("Tipo de Veiculo Selecionado: Moto\n");
            printf("-------------------------------------------------------------------\n");
    
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
	        printf("O veiculo ficou no estacionamento por: %i:%i:%i\n", hrF, minF, segF);
            
    // Calculo do Valor a ser Pago por Hora
            if(hrF==0 && minF<=30){
                printf("O Veiculo passou menos que trinta minutos, Valor a Pagar: $0,0\n"); 
            }
            else{
                valor_cobrado = 4 + (hrF * 2.50);
                printf("O Valor a Pagar eh: %.2f\n", valor_cobrado);
                printf("Digite o Valor Pago:\n");
                scanf("%f", &valor_pago);
                motos = motos = valor_cobrado;
                valor_total_cobrado = valor_total_cobrado + valor_cobrado;
                
                    
            if(valor_pago==valor_cobrado){
                valor_pago=valor_cobrado;
            }
            else{
                if(valor_pago>valor_cobrado){
                valor_a_devolver = valor_pago - valor_cobrado;
                printf("O Valor a Devolver: %.2f\n", valor_a_devolver);
            }
            else{
                valor_a_pagar = valor_cobrado - valor_pago;
                printf("O Valor a Pagar: %.2f\n", valor_a_pagar);
            }
        }
    }
            break;

    // Tipo de Veiculo: Carro Pequeno
            case 2:
            printf("Tipo de Veiculo Selecionado: Carro Pequeno\n");
            printf("-------------------------------------------------------------------\n");

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
	        printf("O veiculo ficou no estacionamento por: %i:%i:%i\n", hrF, minF, segF);
            
    // Calculo do Valor a ser Pago por Hora
            if(hrF==0 && minF<=30){
                printf("O Veiculo passou menos que trinta minutos, Valor a Pagar: $0,0\n");
            }else{
            valor_cobrado = 5.50 + (hrF * 4);
            printf("O Valor a Pagar eh: %.2f\n", valor_cobrado);
            printf("Digite o Valor Pago:\n");
            scanf("%f", &valor_pago);
            carrospequenos = carrospequenos + valor_cobrado;
            valor_total_cobrado = valor_total_cobrado + valor_cobrado;
                 
            if(valor_pago==valor_cobrado){

                valor_pago=valor_cobrado;
            }else{
                if(valor_pago>valor_cobrado){
                valor_a_devolver = valor_pago - valor_cobrado;
                printf("O Valor a Devolver: %.2f\n", valor_a_devolver);
            }
                else{
                    valor_a_pagar = valor_cobrado - valor_pago;
                    printf("O Valor a Pagar: %.2f\n", valor_a_pagar);
                }
            }
            }
            break;
    // Tipo de Veiculo: Carro Grande
            case 3:
            printf("Tipo de Veiculo Selecionado: Carro Grande\n");
            printf("-------------------------------------------------------------------\n");
        
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
	        printf("O veiculo ficou no estacionamento por: %i:%i:%i\n", hrF, minF, segF);
            
    // Calculo do Valor a ser Pago por Hora
            if(hrF==0 && minF<=30){
                printf("O Veiculo passou menos que trinta minutos, Valor a Pagar: $0,0\n");
            }else{
                valor_cobrado = 7.50 + (hrF * 5.50);
                printf("O Valor a Pagar eh: %.2f\n", valor_cobrado);
                printf("Digite o Valor Pago:\n");
                scanf("%f", &valor_pago);
                carrosgrande = carrosgrande + valor_cobrado;
     
                
                 
            if(valor_pago==valor_cobrado){

                valor_pago=valor_cobrado;
            }else{
                if(valor_pago>valor_cobrado){
                valor_a_devolver = valor_pago - valor_cobrado;
                printf("O Valor a Devolver: %.2f\n", valor_a_devolver);
            }
                else{
                    valor_a_pagar = valor_cobrado - valor_pago;
                    printf("O Valor a Pagar: %.2f\n", valor_a_pagar);
                }
            }
        }
        
            break;
        }
        valor_total = valor_total + valor_pago;   
		if(a>0){
		     	
        motos1 = valor_total - motos;
		}
		else if(b>0){
		
		carrospequenos1 = valor_total - carrospequenos;
		}
		else if(c>0){
		
		carrosgrande1 = valor_total - carrosgrande;
  		}
    }
    }while(codigo_veiculo!=-1);
     printf("O Valor Arrecadado no dia foi: %.2f\n", valor_total);
     printf("O valor pago por motos: %f\n", motos);
     printf("O valor pago por carros pequenos: %f\n", carrospequenos);
     printf("O valor pago pelos os carros grandes: %f\n", carrosgrande);
     printf("A diferenca do valor total pago e o valor total cobrado:\n");
     printf("Motos: %f", motos1);
     printf("\n");
     if(motos1<0){
        		
        		printf("A empresa ficou no preju�zo\n");
			}
     printf("Carros pequenos: %f", carrospequenos1);
     printf("\n");
     if(carrospequenos1<0){
        		
        		printf("A empresa ficou no preju�zo\n");
			}
     printf("Carros grandes: %f", carrosgrande1);
     	if(carrosgrande1<0){
        		
        		printf("A empresa ficou no preju�zo\n");
			}
     printf("\n");
    }      
    
        break;
    // Condi��o 2 para Exibir Relat�rio
      case 2:


    
        break;
    //Condi��o 3 para Exibir os Creditos 
      case 3:
        printf("copyright � 2022 todos os direitos reservados,\n- Eduardo de Andrade Bomfim Jr\n- Mari Alessandra Santana de Sousa\n- Felipe Soares Lisboa de Melo\n- Eider Souza Costa dos Santos\n- Bianca Hellen Oliveira Silva\n- Everton Jesus dos Santos\n\n");
        system("Pause");
        break;
    }
}
	//Finaliza o c�digo
    while(opcao!=4);
    
return 0;
}
