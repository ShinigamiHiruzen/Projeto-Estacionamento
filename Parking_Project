#include<stdio.h>
#include<stdlib.h>

//Função main
int main(){
	
	//Variaveis
    float valor_cobrado, valor_pago, valor_correto, valor_a_devolver, valor_a_pagar, valor_percentual=0;
    float valor_total_cobrado_M=0, valor_total_cobrado_CP=0, valor_total_cobrado_CG=0;
    float valor_mes_M=0, valor_mes_CP=0, valor_mes_CG=0;
    float moto, carro_pequeno, carro_grande;
    int opcao, opcao2;
    float valor_total=0, diferenca_valores=0;
    int codigo_veiculo, dia=0, MV_codigo_veiculo;
    int hrE, minE, segE, hrS, minS, segS, hrF, minF, segF;
    //c= quantidade de cobranças menor feitas total
    int c=0, Cliente=0;
    float valor_pago_mes=0, valor_cobrado_mes=0, valor_da_diferenca;
    //Menor número de pagamento
    float menor_valor=1000000000, carropequeno_total=0, carropequeno_total_menor_cobrado=0;
   
//Laço de repetição do menu inicial	
do{
	
	//Menu
    printf("------------Seja Bem Vindo ao Sistema de Estacionamento------------\n\n");
    printf(">>>>> MENU <<<<<\n\n");
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
    for(dia=1; dia<=30; dia++){
            
            // Essa parte vai igualar todas as variaveis acumulativas
            Cliente=0;
    		valor_total = 0;
    		moto = 0;
    		carro_pequeno = 0;
    		carro_grande = 0;
    		valor_total_cobrado_M = 0;
    		valor_total_cobrado_CG = 0;
    		valor_total_cobrado_CP = 0;

    	do{

		Cliente++;	
        printf("\nDia %i", dia);
        printf("\nCliente %i", Cliente);
        if(Cliente>1){

            printf("\nDigite -1 no codigo de veiculo para finalizar o dia.");
        }
		printf("\n");
        
        printf("\nDigite o Codigo do Veiculo:\n");
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

        if(opcao2 == 2){

            carropequeno_total++;
        }        
        else if(opcao2 < 1 || opcao2 > 3){
			
			printf("\nCodigo invalido\n\n");
		} 
    }while(opcao2 != 1 && opcao2 != 2 && opcao2 != 3);
    // Tipo de Veiculo: MOTO    
        switch(opcao2){
            case 1:

            printf("Tipo de Veiculo Selecionado: Moto\n");
            printf("-------------------------------------------------------------------\n");
    
            do{
            // Calculo horario 
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

                printf("O Veiculo passou menos que trinta minutos, Valor a Pagar: R$0,0\n"); 
            }
            else{

                valor_cobrado = 4 + (hrF * 2.50);
                printf("O Valor a Pagar eh: R$ %.2f\n", valor_cobrado);
                printf("Digite o Valor Pago: R$ ");
                scanf("%f", &valor_pago);
                printf("\n");

                valor_mes_M = valor_mes_M + valor_pago;
                valor_total_cobrado_M = valor_total_cobrado_M + valor_cobrado;

                //Fórmula nova
                valor_cobrado_mes = valor_cobrado_mes + valor_cobrado;
                valor_pago_mes = valor_pago_mes + valor_pago;
                    
            if(valor_pago==valor_cobrado){

                valor_pago=valor_cobrado;
                printf("O Valor foi Pago Corretamente.\n");
            }
            else{

                if(valor_pago>valor_cobrado){

                valor_a_devolver = valor_pago - valor_cobrado;
                printf("O Valor a Devolver: R$ %.2f\n", valor_a_devolver);
                c++;
            }
            //Valor pago menor que o valor cobrado
            else{

                valor_a_pagar = valor_cobrado - valor_pago;
                printf("O Valor a Pagar: R$ %.2f\n", valor_a_pagar);
            }
        }
    }
            break;

    // Tipo de Veiculo: Carro Pequeno
            case 2:

            printf("Tipo de Veiculo Selecionado: Carro Pequeno\n");
            printf("-------------------------------------------------------------------\n");

            do{
            // Calculo horario 
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
            // Mostra o tempo que o veiculo ficou no estacionamento
	        printf("O veiculo ficou no estacionamento por: %i:%i:%i\n", hrF, minF, segF);
            
    // Calculo do Valor a ser Pago por Hora
            if(hrF==0 && minF<=30){

                printf("O Veiculo passou menos que trinta minutos, Valor a Pagar: R$0,0\n");
                
            }else{

            valor_cobrado = 5.50 + (hrF * 4);
            printf("O Valor a Pagar eh: R$ %.2f\n", valor_cobrado);
            printf("Digite o Valor Pago: R$ ");
            scanf("%f", &valor_pago);
            printf("\n");

            valor_mes_CP = valor_mes_CP + valor_pago;
            valor_total_cobrado_CP = valor_total_cobrado_CP + valor_cobrado;

            //Fórmula nova
            valor_cobrado_mes = valor_cobrado_mes + valor_cobrado;
            valor_pago_mes = valor_pago_mes + valor_pago;
            
            if(valor_pago==valor_cobrado){

                valor_pago=valor_cobrado;
                printf("O Valor foi Pago Corretamente.\n");

            }else{

                if(valor_pago>valor_cobrado){

                valor_a_devolver = valor_pago - valor_cobrado;
                printf("O Valor a Devolver: R$ %.2f\n", valor_a_devolver);
                c++;
            }
            //Valor pago menor que o valor cobrado
                else{

                    valor_a_pagar = valor_cobrado - valor_pago;
                    printf("O Valor a Pagar: R$ %.2f\n", valor_a_pagar);
                    valor_percentual = valor_percentual + valor_pago;
                    carropequeno_total_menor_cobrado++;
                }
            }
      }
            break;
    // Tipo de Veiculo: Carro Grande
            case 3:
            
            printf("Tipo de Veiculo Selecionado: Carro Grande\n");
            printf("-------------------------------------------------------------------\n");
        
            do{
            // // Calculo horario 
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
            // Mostra o tempo que o veiculo ficou no estacionamento
	        printf("O veiculo ficou no estacionamento por: %i:%i:%i\n", hrF, minF, segF);
            
    // Calculo do Valor a ser Pago por Hora
            if(hrF==0 && minF<=30){

                printf("O Veiculo passou menos que trinta minutos, Valor a Pagar: $0,0\n");

            }else{

                valor_cobrado = 7.50 + (hrF * 5.50);
                printf("O Valor a Pagar eh: R$ %.2f\n", valor_cobrado);
                printf("Digite o Valor Pago: R$ ");
                scanf("%f", &valor_pago);
                printf("\n");

                valor_mes_CG = valor_mes_CG + valor_pago;
                valor_total_cobrado_CG = valor_total_cobrado_CG + valor_cobrado;

                //Fórmula nova
                valor_cobrado_mes = valor_cobrado_mes + valor_cobrado;
                valor_pago_mes = valor_pago_mes + valor_pago;

            if(valor_pago==valor_cobrado){

                valor_pago=valor_cobrado;
                printf("O Valor foi Pago Corretamente.\n");
            }else{

                if(valor_pago>valor_cobrado){
                valor_a_devolver = valor_pago - valor_cobrado;
                printf("O Valor a Devolver: R$ %.2f\n", valor_a_devolver);
                c++;
            }
            //Valor pago menor que o valor cobrado
                else{

                    valor_a_pagar = valor_cobrado - valor_pago;
                    printf("O Valor a Pagar: R$ %.2f\n", valor_a_pagar);
                }
            }
            //Menor valor pago pelos carros grandes
            if(valor_pago < menor_valor){

                menor_valor = valor_pago;
                MV_codigo_veiculo = codigo_veiculo;
            }
        }
            break;
   }   
   // Calculos para informar o valor arrecadado por tipo de veiculo no dia    
        valor_total = valor_total + valor_pago;
        moto = valor_total - valor_total_cobrado_M;
        carro_pequeno = valor_total - valor_total_cobrado_CP;
        carro_grande = valor_total - valor_total_cobrado_CG;
        
    }
    //Relatório do Dia
    }while(codigo_veiculo!=-1);
    
    printf("O Valor Arrecadado no dia foi: R$%.2f\n", valor_total);
    printf("Valor Arrecadado Esperado por Veiculo:\n");
    printf("Motos: R$ %.2f\n", valor_total_cobrado_M);
    printf("Carros Pequenos: R$ %.2f\n", valor_total_cobrado_CP);
    printf("Carros Grandes: R$ %.2f\n", valor_total_cobrado_CG);
    printf("\n\n");
    
// Calcula a diferença entre o Valor Arrecadado e o Valor Esperado informando se houve ou não prejuízo no dia
    printf("Diferenca Entre Valor Total Cobrado e Valor Total Pago por Tipo de Veiculo:\n\n");
    if(moto >= 0 || moto <= 0){

        printf("Moto: \n");
        if(moto < 0){

        printf("Valor: R$ %.2f\n", moto);
        printf("Houve Prejuizo para a Empresa.\n\n");
        }else {
            
        printf("Nao Houve Prejuizo para a Empresa.\n\n");
        }
    }
    if(carro_pequeno >= 0 || carro_pequeno <= 0){

        printf("Carro pequeno: \n");
        if(carro_pequeno < 0){

        printf("Valor: R$ %.2f\n", carro_pequeno);
        printf("Houve Prejuizo para a Empresa.\n\n");
        } else{

        printf("Nao Houve Prejuizo para a Empresa.\n\n");
        }
    }
    if(carro_grande >= 0 || carro_grande <= 0){

        printf("Carro grande: \n");
        if(carro_grande < 0){

            printf("Valor: R$ %.2f\n", carro_grande);
            printf("Houve Prejuizo para a Empresa.\n\n");
        }else {

            printf("Nao Houve Prejuizo para a Empresa.\n\n");
        }
    }
    // Esse comando vai dar uma pausa na continuacao do codigo
    system("Pause");
}      
        // Vai quebrar o case 1   
        break;
    // Condição 2 para Exibir Relatório
      case 2:
        // Calculo das formulas do percentual dos valores
        diferenca_valores = valor_pago_mes - valor_cobrado_mes;
        valor_da_diferenca = diferenca_valores/30;
        // Vai testar se houve carro pequenos nos meses
         if(carropequeno_total_menor_cobrado > 0){
        valor_percentual = (carropequeno_total_menor_cobrado/carropequeno_total)*100;
        }
        printf(">>>>> RELATORIO DO MES <<<<<\n\n");
        printf("Valor Arrecadado por Veiculo:\n");
        printf("Motos: R$ %.2f\n", valor_mes_M);
        printf("Carros Pequenos: R$ %.2f\n", valor_mes_CP);
        printf("Carros Grandes: R$ %.2f\n", valor_mes_CG);
        printf("\n\n");
        printf("Media da Diferenca Entre Valores (Pago X Cobrado): R$ %.2f\n", valor_da_diferenca);
        printf("Quantidade de Cobrancas feitas acima do valor cobrado: %i\n\n", c);

        // Vai informar o codigo do veiculo que pagou o menor valor entre os carros grandes
        if(menor_valor < 1000000000){

        printf("Codigo do Veiculo que pagou o menor valor entre Carros Grandes: %i\n", MV_codigo_veiculo);
        printf("Valor: R$ %.2f\n\n", menor_valor);
        // Se nao teve carros grandes no mes
        }else{

            printf("Nao Houve Carros Grandes no mes.\n");
        }
        printf("Percentual de Carros Pequenos com valor pago abaixo do valor correto: %.2f%%\n", valor_percentual);
        // Se o percentual foi igual a 0, vai informar que nao houve carros pequenos que pagou valor baixo do correto
        if(valor_percentual==0){

            printf("Nao Houve Carros pequenos que pagou um valor abaixo do valor correto no mes.\n\n");
        }
        system("Pause");

        // Vai quebrar o case 2
        break;
    //Condição 3 para Exibir os Creditos 
      case 3:

        printf("copyright © 2022 todos os direitos reservados.\n- Eduardo de Andrade Bomfim Jr\n- Mari Alessandra Santana de Sousa\n- Felipe Soares Lisboa de Melo\n- Eider Souza Costa dos Santos\n- Bianca Hellen Oliveira Silva\n- Everton Jesus dos Santos\n\n");
        system("Pause");
        // Vai quebrar o case 3
        break;
    }
    if(opcao<1 || opcao>4){
    printf("Opcao nao encontrada, digite novamente\n\n");
    }
}
	//Finaliza o código
    while(opcao!=4);

return 0;
}
