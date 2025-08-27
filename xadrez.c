#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int peca, lado, passos;
    char continuar;

    do{
        printf("==>Escolha a peça<==\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        printf("4 - cavalo (indisponivel)\n");
        printf("Digite a opção\n");
        scanf("%d", &peca);

        switch (peca){
            case 1: 
            printf("Você escolheu o Bispo\n");

            printf("\n==>Escolha o lado<==\n");
            printf("1 - Cima para a direita\n");
            printf("2 - Cima para a esquerda\n");
            printf("3 - Baixo para a direita\n");
            printf("4 - Baixo para a esquerda\n");
            printf("Escolha uma opção:\n");
            scanf("%d", &lado);

            switch (lado){
            case 1: printf("Você escolheu: Cima para a direita\n");break;
            case 2: printf("Você escolheu: Cima para a esquerda\n");break;
            case 3: printf("Você escolheu: Baixo para a direita\n");break;
            case 4: printf("Você escolheu: Baixo para a esquerda\n");break;
            default: printf("Opção invalida!\n"); break;
            }

            printf("\nDigite a quantidade de passos, quantas casas deseja que sua peça prossiga(de 1 a 5):\n");
            scanf("%d", &passos);
            if(passos >= 1 && passos <=5){
                printf("Você escolheu andar %d passo(s) com  o Bispo.\n");
            }else {
                printf("Você escolheu um número invalido! Escolha de 1 a 5.\n");
                continue;
            }

            if(passos = 1){
                do{
                printf("Cima direita");
                passos++;
            } while (passos <= 5);
            } 
            
            else if (passos = 2){
                do{
                printf("Cima esquerda");
                passos++;
            } while (passos <= 5);
            }
            
            else if (passos = 3){
                do{
                printf("Baixo direita");
                passos++;
            } while (passos <= 5);
            }
            
            else {
                do{
                printf("Baixo esquerda");
                passos++;
            } while (passos <= 5);
            }
            
            break;
            
            case 2: printf("Você escolheu a Torre\n");
            
            break;
            
            case 3: printf("Você escolheu a Rainha\n");
            
            break;
            
            case 4: printf("Você escolheu o Cavalo\n");
            
            break;
            
            default: printf("Opção invalida\n"); continue;
        }

        printf("Deseja fazer outra jogada?(s/n): ");
        scanf("%c", &continuar);



    }while (continuar == 's' || continuar =='S');
    printf("\nEncerrando Xadrez...\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
