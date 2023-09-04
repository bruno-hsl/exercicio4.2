#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    if(a == 0){
        printf("não é uma equação do segundo grau");
    }

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    delta = (b * b) - 4 * a * c;
    

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    
    if(delta < 0){
        printf("Não existe raiz");
    }
    else if(delta == 0){
        printf("%lf: Raiz  única", delta);
    }
    else{
        printf("%lf   %lf", x1, x2);
    }

    return 0;
}