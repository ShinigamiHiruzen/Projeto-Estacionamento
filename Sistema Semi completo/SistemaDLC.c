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
    float valor_cobrado, valor_pago, valor_correto, valor_a_devolver, valor_a_pagar;
    float valor_total_cobrado_M=0, valor_total_cobrado_CP=0, valor_total_cobrado_CG=0;
    float valor_restante_M, valor_restante_CP, valor_restante_CG;
    float valor_mes_M=0, valor_mes_CP=0, valor_mes_CG=0, valor_abaixo_CP;
    float moto, carro_pequeno, carro_grande;
    int opcao, opcao2;
    float valor_total=0, diferenca_valores;
    int codigo_veiculo, dia=0, MV_codigo_veiculo, cobrancas_acima=0;
    int hrE, minE, segE, hrS, minS, segS, hrF, minF, segF;
    //A = moto, B = carro pequeno e C = carro grande
    int a=0, b=0, c=0;

//Laço de repetição do menu inicial	
do{
	
	//Menu
    printf("------------Seja Bem Vindo ao Sistema de Estacionamento------------\n\n");
    printf(">>>>>MENU<<<<<\n\n");
    printf("Selecione a opcao desejada:\n");
    printf("1 - Registrar Movimento\n");
    printf("2 - Exibir Relatorio\n");
    printf("3 - Creditos\n");
    printf("4 - Encerrar\n");
    printf("-------------------------------------------------------------------\n");
    printf("R: ");
    scanf("%i", &opcao);

	//Condição 1 para registrar movimento no estacionamento
    switch (opcao){
      case 1:
    // Contagem do Mes
    for(dia=1; dia<=3; dia++){
    	
    	if(dia > 1){
    		
    		valor_total = 0;
    		moto = 0;
    		carro_pequeno = 0;
    		carro_grande = 0;
    		valor_total_cobrado_M = 0;
    		valor_total_cobrado_CG = 0;
    		valor_total_cobrado_CP = 0;
		}
    	
    	do{
		
        printf("\nDia %i", dia);
		printf("\n");

        printf("Digite o Codigo do Veiculo:\n");
        printf("R: ");
        scanf("%i", &codigo_veiculo);
        
        if(codigo_veiculo<0){
        printf("\n\n>>>>> DIA ENCERRADO <<<<<\n\n");
		}
        else{ 
		do{
		 	
        printf("Selecione o Tipo de Veiculo:\n");
        printf("1 - Moto\n");
        printf("2 - Carro Pequeno\n");
        printf("3 - Carro Grande\n");
        printf("-------------------------------------------------------------------\n");
        printf("R: ");
        scanf("%i", &opcao2);
        
        if(opcao2 == 1){
        	
        	a= a + 1;
		} 
		if(opcao2 == 2){
			
			b = b + 1;
		}
		if(opcao2 == 3){
			
			c = c + 1;
		} else if(opcao2 < 1 || opcao2 > 3){
			
			printf("Codigo invalido\n");
		} else {
			
			printf("Codigo invalido\n");
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

                valor_mes_M = valor_mes_M + valor_pago;
                valor_total_cobrado_M = valor_total_cobrado_M + valor_cobrado;
                    
            if(valor_pago==valor_cobrado){
                valor_pago=valor_cobrado;
                printf("O Valor foi Pago Corretamente.\n");
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

            valor_mes_CP = valor_mes_CP + valor_pago;
            valor_total_cobrado_CP = valor_total_cobrado_CP + valor_cobrado;
                 
            if(valor_pago==valor_cobrado){
                valor_pago=valor_cobrado;
                printf("O Valor foi Pago Corretamente.\n");
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

                valor_mes_CG = valor_mes_CG + valor_pago;
                valor_total_cobrado_CG = valor_total_cobrado_CG + valor_cobrado;

            if(valor_pago==valor_cobrado){
                valor_pago=valor_cobrado;
                printf("O Valor foi Pago Corretamente.\n");
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
        moto = valor_total - valor_total_cobrado_M;
        carro_pequeno = valor_total - valor_total_cobrado_CP;
        carro_grande = valor_total - valor_total_cobrado_CG;
        
        if (a == 0){
        	
        	moto = 0;
		} if(b == 0){
			
			carro_pequeno = 0;
		} if (c == 0){
			
			carro_grande = 0;
		}

    }
    }while(codigo_veiculo!=-1);
    printf("O Valor Arrecadado no dia foi: %.2f\n", valor_total);
    printf("Valor Arrecadado Esperado por Veiculo:\n");
    printf("Motos: %.2f\n", valor_total_cobrado_M);
    printf("Carros Pequenos: %.2f\n", valor_total_cobrado_CP);
    printf("Carros Grandes: %.2f\n", valor_total_cobrado_CG);
    printf("\n\n");

    printf("Diferenca Entre Valor Total Cobrado e Valor Total Pago por Tipo de Veiculo:\n");
    printf("Motos: %.2f\n", moto);
        if(moto < 0){
        printf("Houve Prejuizo para a Empresa.\n");
        }else if(moto >= 0){
        printf("Nao Houve Prejuizo para a Empresa.\n");
        }
    printf("Carros Pequenos: %.2f\n", carro_pequeno);
        if(carro_pequeno < 0){
        printf("Houve Prejuizo para a Empresa.\n");
        }else if(carro_pequeno >= 0){
        printf("Nao Houve Prejuizo para a Empresa.\n");
        }
    printf("Carros Grandes: %.2f\n", carro_grande);
        if(carro_pequeno < 0){
            printf("Houve Prejuizo para a Empresa.\n");
        }else if(carro_grande >= 0){
            printf("Nao Houve Prejuizo para a Empresa.\n");
        }

    }
        
    
        break;
    // Condição 2 para Exibir Relatório
      case 2:

        printf(">>>>> RELATORIO DO MES <<<<<\n\n");
        printf("Valor Arrecadado por Veiculo:\n");
        printf("Motos: %.2f\n", valor_mes_M);
        printf("Carros Pequenos: %.2f\n", valor_mes_CP);
        printf("Carros Grandes: %.2f\n", valor_mes_CG);
        printf("\n\n");
        printf("Diferenca Entre Valores (Pago X Cobrado): %.2f\n", diferenca_valores);
        printf("Codigo do Veiculo que pagou o menor valor entre Carros Grandes: %i\n", MV_codigo_veiculo);
        printf("Percentual de Carros Pequenos com valor pago abaixo do valor correto: %.2f\n", valor_abaixo_CP);
        printf("Cobrancas feitas acima do valor cobrado: %i\n\n", cobrancas_acima);


    
        break;
    //Condição 3 para Exibir os Creditos 
      case 3:
        printf("copyright © 2022 todos os direitos reservados,\n- Eduardo de Andrade Bomfim Jr\n- Mari Alessandra Santana de Sousa\n- Felipe Soares Lisboa de Melo\n- Eider Souza Costa dos Santos\n- Bianca Hellen Oliveira Silva\n- Everton Jesus dos Santos\n\n");
        system("Pause");
        break;
    }
}
	//Finaliza o código
    while(opcao!=4);
    
return 0;
}