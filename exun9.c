#include <stdio.h>

int main() {
    float salario, tempoDeServico, novoSalario;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o tempo de serviço (em anos) do funcionário: ");
    scanf("%f", &tempoDeServico);

    if (salario <= 500) {
        novoSalario = salario * 1.25;
    } else if (salario <= 1000) {
        novoSalario = salario * 1.20; 
    } else if (salario <= 1500) {
        novoSalario = salario * 1.15;
    } else if (salario <= 2000) {
        novoSalario = salario * 1.10; 
    } else {
        novoSalario = salario; 
    }

    if (tempoDeServico >= 1 && tempoDeServico <= 3) {
        novoSalario += 100; 
    } else if (tempoDeServico >= 4 && tempoDeServico <= 6) {
        novoSalario += 200; 
    } else if (tempoDeServico >= 7 && tempoDeServico <= 10) {
        novoSalario += 300; 
    } else if (tempoDeServico > 10) {
        novoSalario += 500;
    }

    printf("Novo salário reajustado: R$%.2f\n", novoSalario);

    return 0;
}
