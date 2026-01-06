#include <stdio.h>

int main() {

    float n1, n2, n3, media;
    int repetir;

    do {

        printf("=== Sistema de Media Escolar ===\n");

        printf("Digite a primeira nota: ");
        scanf("%f", &n1);

        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;

        printf("\nMedia final: %.2f\n", media);

        if (media >= 7) {
            printf("Situacao: APROVADO\n");
        } else if (media >= 5) {
            printf("Situacao: RECUPERACAO\n");
        } else {
            printf("Situacao: REPROVADO\n");
        }

        printf("\nDeseja calcular outra media?\n");
        printf("Digite 1 para SIM ou 0 para NAO: ");
        scanf("%i", &repetir);

        printf("\n");

    } while (repetir == 1);

    printf("Programa encerrado.\n");

    return 0;
}

