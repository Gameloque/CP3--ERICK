#include <stdio.h>
#include <stdlib.h>

float saldo = 0;

// Prototipos
void exibirMenu();
void consultarSaldo(float saldo);
float realizarSaque(float saldo);
float realizarDeposito(float saldo);

void exibirMenu() {
    printf("\n1 - Consultar Saldo");
    printf("\n2 - Realizar Saque");
    printf("\n3 - Realizar Deposito");
    printf("\n0 - Sair");
    printf("\nOpcao: ");
}

void consultarSaldo(float saldo) {
    printf("\nSaldo: %.2f\n", saldo);
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

    printf("Saldo Atual: R$ %.2f\n", saldo);
    printf("\nPressione Enter para continuar...");
    setbuf(stdin, NULL);
    getchar();

    return 0;
} 
