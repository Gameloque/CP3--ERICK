#include <stdio.h>
#include <string.h>

float saldo = 0;

void exibirMenu() {
    printf("\n========================\n");
    printf(" CAIXA ELETRONICO \n");
    printf("========================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("========================\n");
    printf("Escolha uma opcao: ");
}

int main() {

    int opcao;

    exibirMenu();
    scanf("%d", &opcao);

    // Limpar buffer
    while (getchar() != '\n');

    // Validação básica
    if (opcao < 0 || opcao > 3) {
        printf("Opcao invalida!\n");
    }

    return 0;
}