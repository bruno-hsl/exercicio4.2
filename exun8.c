#include <stdio.h>

int main(){
    /* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se 
     aposentar. As condições para aposentadoria são: • Ter pelo menos 65 anos; • Ou ter
      trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 
      */
      float idade, tempoDeServico;

      printf("Digite sua idade: ");
      scanf("%f", &idade);

      printf("Tempo de servico: ");
      scanf("%f", &tempoDeServico);

      if(idade >= 65 || tempoDeServico >= 30){
        printf("POde se aposentar");
      }
      else if(idade >= 60 && tempoDeServico >= 25){
        printf("Pode se aposentar");
      }
      else{
        printf("Nao pode se aposentar");
      }


    return 0;
}