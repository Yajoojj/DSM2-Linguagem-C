#include <stdio.h>

// Função principal
int main() {
    int p, q, r; // Variáveis booleanas
    int not_q, p_or_not_q, q_and_r, result;

    // Cabeçalho da tabela
    printf(" p | q | r | \u00acq | p \u2228 \u00acq | q \u2227 r | (p \u2228 \u00acq) \u2192 (q \u2227 r)\n");
    printf("---+---+---+----+--------+-------+---------------------\n");

    // Loop para todas as combinações de p, q e r
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                // Cálculo das expressões intermediárias
                not_q = !q;
                p_or_not_q = p || not_q;
                q_and_r = q && r;
                result = !p_or_not_q || q_and_r; // Implementação da implicação

                // Exibir linha da tabela
                printf(" %d | %d | %d |  %d  |    %d    |   %d   |          %d          \n",
                       p, q, r, not_q, p_or_not_q, q_and_r, result);
            }
        }
    }
    return 0;
}
