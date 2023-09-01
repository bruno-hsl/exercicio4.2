#include <stdio.h>

int main(){
    /* Faça um algoritmo que calcule a media ponderada das notas de 3 provas.
     A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final,
      mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado.
       A nota para aprovação deve ser igual ou  superior a 7.0 pontos. */

       float n1, n2, n3, soma, media;

       printf("Digite a nota da primeira prova: ");
       scanf("%f", &n1);

       printf("Digite a nota da segunda prova: ");
       scanf("%f", &n2);

       printf("Digite a nota da terceira prova: ");
       scanf("%f", &n3);

       soma = n1 + n2 + n3;
       media = soma / 3;


       if(media >= 7){
        printf("Aprovado com %2.f pontos.", media);
       }
       else{
        printf("Reprovado com %2.f pontos", media);
       }

    return 0;
}