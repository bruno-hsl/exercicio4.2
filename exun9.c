#include <stdio.h>

int main(){
    /*Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera
     o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario 
     terão um aumento proporcionalmente maior do que os funcionários  com um salario maior,
      e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus 
      adicional de salário. Faça um programa que leia:
      
      • o valor do salario atual do funcionário; 

     •o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

     Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do
     salario final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento. 
      */

    float salario, tempoDeServico, nsalario25, nsalario20, nsalario15, nsalario10;

      printf("Digite seu salario: ");
      scanf("%f", &salario);

      printf("Tempo de servico: ");
      scanf("%f", &tempoDeServico);

      nsalario25 = (salario * 0.25) + salario;
      nsalario20 = (salario * 0.20) + salario;
      nsalario15 = (salario * 0.15) + salario;
      nsalario10 = (salario * 0.10) + salario;

      if(salario <= 500){
        printf("reajuste de 25%%. Novo salario: %2.f + ", nsalario25);

        if(tempoDeServico < 1){
            printf("Sem bonus");
        }
        else if(tempoDeServico >=1 && tempoDeServico <= 3){
        printf("Bonus de 100R$");
        }
         else if(tempoDeServico >=4 && tempoDeServico <= 6){
        printf("Bonus de 200R$");
        }
         else if(tempoDeServico >=7 && tempoDeServico <= 10){
        printf("Bonus de 300R$");
        }
        else{
            printf("Bonus de 500R$");
        }
      }

      if(salario <= 1000){
        printf("reajuste de 20%%. Novo salario: %2.f + ", nsalario20);

        if(tempoDeServico < 1){
            printf("Sem bonus");
        }
        else if(tempoDeServico >=1 && tempoDeServico <= 3){
        printf("Bonus de 100R$");
        }
         else if(tempoDeServico >=4 && tempoDeServico <= 6){
        printf("Bonus de 200R$");
        }
         else if(tempoDeServico >=7 && tempoDeServico <= 10){
        printf("Bonus de 300R$");
        }
        else{
            printf("Bonus de 500R$");
        }
      }

      if(salario <= 1500){
        printf("reajuste de 15%%. Novo salario: %2.f + ", nsalario15);

        if(tempoDeServico < 1){
            printf("Sem bonus");
        }
        else if(tempoDeServico >=1 && tempoDeServico <= 3){
        printf("Bonus de 100R$");
        }
         else if(tempoDeServico >=4 && tempoDeServico <= 6){
        printf("Bonus de 200R$");
        }
         else if(tempoDeServico >=7 && tempoDeServico <= 10){
        printf("Bonus de 300R$");
        }
        else{
            printf("Bonus de 500R$");
        }
      }

      if(salario <= 2000){
        printf("reajuste de 10%%. Novo salario: %2.f + ", nsalario10);

        if(tempoDeServico < 1){
            printf("Sem bonus");
        }
        else if(tempoDeServico >=1 && tempoDeServico <= 3){
        printf("Bonus de 100R$");
        }
         else if(tempoDeServico >=4 && tempoDeServico <= 6){
        printf("Bonus de 200R$");
        }
         else if(tempoDeServico >=7 && tempoDeServico <= 10){
        printf("Bonus de 300R$");
        }
        else{
            printf("Bonus de 500R$");
        }
      }

      if(salario > 2000){
        printf("Sem reajuste. Salario + ");

        if(tempoDeServico < 1){
            printf("Sem bonus");
        }
        else if(tempoDeServico >=1 && tempoDeServico <= 3){
        printf("Bonus de 100R$");
        }
         else if(tempoDeServico >=4 && tempoDeServico <= 6){
        printf("Bonus de 200R$");
        }
         else if(tempoDeServico >=7 && tempoDeServico <= 10){
        printf("Bonus de 300R$");
        }
        else{
            printf("Bonus de 500R$");
        }
      }
    

    return 0;
}
