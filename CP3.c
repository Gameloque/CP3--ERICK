#include <stdio.h>
#include <stdlib.h> // Usado para dar o ("cls") e ("pause") -- Não estudamos ainda, mas quis implementar para o melhor funcionamento do sistema

float saldo = 0;

// Funções usadas no texto
void exibirMenu();
void consultarSaldo(float saldo);
float realizarSaque(float saldo);
float realizarDeposito(float saldo);
void limparBuffer();

// Função para exibir o menu principal -- Funciona igual arduíno? kkk
void exibirMenu() {
    printf("\n");
    printf("============================\n");
    printf("  CAIXA ELETRONICO FIAP  \n");
    printf("============================\n");
    printf("\n1 - Consultar Saldo");
    printf("\n2 - Realizar Saque");
    printf("\n3 - Realizar Deposito");
    printf("\n0 - Sair");
    printf("============================\n");
    printf("Digite sua opcao: ");
}



float realizarSaque(float saldo) {
    float valor;

    printf("Valor do saque: ");
    scanf("%f", &valor);

    if (valor > 0 && valor <= saldo) {
        saldo -= valor;
        printf("Saque realizado!\n");
    } else {
        printf("Valor invalido!\n");
    }
    return saldo;

}
float realizarDeposito(float saldo) {
    float valor;

    printf("Valor do deposito: ");
    scanf("%f", &valor);

    if (valor > 0) {
        saldo += valor;
        printf("Deposito realizado!\n");
    } else {
        printf("Valor invalido!\n");
    }

    return saldo;
}

int main() {

    int opcao;

    exibirMenu();
    scanf("%d", &opcao);

    switch(opcao) {

        case 1:
            consultarSaldo(saldo);
            break;

        case 2:
            realizarSaque(saldo);
            break;

        case 3:
            realizarDeposito(saldo);
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }
    
    system("pause");
    system("cls");

    printf("Saldo: R$ %.2f\n", saldo);
    printf("\nPressione Enter para continuar...");
    setbuf(stdin, NULL);
    getchar();

    return 0;
} 


