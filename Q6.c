#include <stdio.h>

int main() {
    int voto,votos_paulo=0,votos_renata=0,votos_branco=0,votos_nulos=0,total_votos=0;

        printf("Urna Eletrônica - Eleição para Presidente\n");

        do {
            printf("Digite o número do candidato (5 para Paulo, 7 para Renata, 0 para voto em branco, ou negativo para encerrar): ");
            scanf("%d", &voto);

            if (voto >= 0) {
                total_votos++;

                switch (voto) {
                    case 5:
                        votos_paulo++;
                        break;
                    case 7:
                        votos_renata++;
                        break;
                    case 0:
                        votos_branco++;
                        break;
                    default:
                        votos_nulos++;
                        break;
                }

                printf("Confirma seu voto (1 para sim, 0 para nao)? ");
                int confirmacao;
                scanf("%d", &confirmacao);
                if (confirmacao != 1) {
                    printf("Voto cancelado\n");
                }
            }
        } while (voto >= 0);

        float porcentagem_paulo = (float)votos_paulo / total_votos * 100;
        float porcentagem_renata = (float)votos_renata / total_votos * 100;
        float porcentagem_branco = (float)votos_branco / total_votos * 100;
        float porcentagem_nulos = (float)votos_nulos / total_votos * 100;

        printf("\nResultados da Eleicao:\n");
        printf("Total de votos: %d\n", total_votos);
        printf("Votos para Paulo (Candidato 5): %d (%.2f%%)\n", votos_paulo, porcentagem_paulo);
        printf("Votos para Renata (Candidato 7): %d (%.2f%%)\n", votos_renata, porcentagem_renata);
        printf("Votos em branco: %d (%.2f%%)\n", votos_branco, porcentagem_branco);
        printf("Votos nulos: %d (%.2f%%)\n", votos_nulos, porcentagem_nulos);

        if (votos_paulo > votos_renata) {
            printf("Paulo e o candidato eleito!\n");
        } else if (votos_renata > votos_paulo) {
            printf("Renata e a candidata eleita!\n");
        } else {
            printf("A eleiçao terminou em empate.\n");
        }

    return 0;
}
