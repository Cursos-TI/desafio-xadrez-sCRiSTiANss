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
        int repetirPassos = 1;
        int movCavalo = 0;
        int movCavalo2 = 2;

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

            if(lado == 1){
                do{
                printf("Bispo andou na diagonal cima direita\n");
                repetirPassos++;
            } while (repetirPassos <= passos);
            } 
            
            else if (lado == 2){
                do{
                printf("Bispo andou na diagonal cima esquerda\n");
                repetirPassos++;
            } while (repetirPassos <= passos);
            }
            
            else if (lado == 3){
                do{
                printf("Bispo andou na diagonal baixo direita\n");
                repetirPassos++;
            } while (repetirPassos <= passos);
            }
            
            else if (lado == 4){
                do{
                printf("Bispo andou na diagonal baixo esquerda\n");
                repetirPassos++;
            } while (repetirPassos <= passos);
            }
            
            break;
            
            case 2: printf("Você escolheu a Torre\n");

            printf("\n==>Escolha o lado<==\n");
            printf("1 - Para cima\n");
            printf("2 - Para direita\n");
            printf("3 - Para esquerda\n");
            printf("4 - Para baixo\n");
            printf("Escolha uma opção:\n");
            scanf("%d", &lado);

            switch (lado){
            case 1: printf("Você escolheu: Para cima\n");break;
            case 2: printf("Você escolheu: Para direita\n");break;
            case 3: printf("Você escolheu: Para esquerda\n");break;
            case 4: printf("Você escolheu:  Para baixo\n");break;
            default: printf("Opção invalida!\n"); break;
            }

            printf("\nDigite a quantidade de passos, quantas casas deseja que sua peça prossiga(de 1 a 5):\n");
            scanf("%d", &passos);
            if(passos >= 1 && passos <=5){
                printf("Você escolheu andar %d passo(s) com  a Torre.\n");
            }else {
                printf("Você escolheu um número invalido! Escolha de 1 a 5.\n");
                continue;
            }

            for(lado == 1; repetirPassos <= passos; repetirPassos++){
                printf("Torre andou para cima\n");
            }

            for(lado == 2; repetirPassos <= passos; repetirPassos++){
                printf("Torre andou para direita\n");
            }

            for(lado == 3; repetirPassos <= passos; repetirPassos++){
                printf("Torre andou para esquerda\n");
            }

            for(lado == 4; repetirPassos <= passos; repetirPassos++){
                printf("Torre andou para baixo\n");
            }
            
            break;
            
            case 3: printf("Você escolheu a Rainha\n");

            printf("\n==>Escolha o lado<==\n");
            printf("1 - Para cima\n");
            printf("2 - Para direita\n");
            printf("3 - Para esquerda\n");
            printf("4 - Para baixo\n");
            printf("5 - Cima direita\n");
            printf("6 - Cima esquerda\n");
            printf("7 - Baixo direita\n");
            printf("8 - Baixo esquerda\n");
            printf("Escolha uma opção:\n");
            scanf("%d", &lado);

            switch (lado){
            case 1: printf("Você escolheu: Para cima\n");break;
            case 2: printf("Você escolheu: Para direita\n");break;
            case 3: printf("Você escolheu: Para esquerda\n");break;
            case 4: printf("Você escolheu:  Para baixo\n");break;
            case 5: printf("Você escolheu:  Cima direita\n");break;
            case 6: printf("Você escolheu:  Cima esquerda\n");break;
            case 7: printf("Você escolheu:  Baixo direita\n");break;
            case 8: printf("Você escolheu:  Baixo esquerda\n");break;
            default: printf("Opção invalida!\n"); break;
            }

            printf("\nDigite a quantidade de passos, quantas casas deseja que sua peça prossiga(de 1 a 5):\n");
            scanf("%d", &passos);
            if(passos >= 1 && passos <=5){
                printf("Você escolheu andar %d passo(s) com  a Rainha.\n");
            }else {
                printf("Você escolheu um número invalido! Escolha de 1 a 5.\n");
                continue;
            }

            if(lado == 1){
            while (repetirPassos <= passos){
                printf("Rainha andou para cima\n");
                repetirPassos++;
            }
            }
            else if(lado == 2){
            while (repetirPassos <= passos){
                printf("Rainha andou para direita\n");
                repetirPassos++;
            }
            }
            else if(lado == 3){
            while (repetirPassos <= passos){
                printf("Rainha andou para esquerda\n");
                repetirPassos++;
            }
            }
            else if(lado == 4){
            while (repetirPassos <= passos){
                printf("Rainha andou para baixo\n");
                repetirPassos++;
            }
            }
            else if(lado == 5){
            while (repetirPassos <= passos){
                printf("Rainha andou para cima direita\n");
                repetirPassos++;
            }
            }
            else if(lado == 6){
            while (repetirPassos <= passos){
                printf("Rainha andou para cima esquerda\n");
                repetirPassos++;
            }
            }
            else if(lado == 7){
            while (repetirPassos <= passos){
                printf("Rainha andou para baixo direita\n");
                repetirPassos++;
            }
            }
            else if(lado == 8){
            while (repetirPassos <= passos){
                printf("Rainha andou para baixo esquerda\n");
                repetirPassos++;
            }
            }

            break;

            case 4: printf("Você escolheu o Cavalo\n");
            
            printf("\n==>Escolha o lado<==\n");
            printf("1 - Da esquerda para cima\n");
            printf("2 - Da esquerda para baixo\n");
            printf("3 - Da direita para cima\n");
            printf("4 - Da direita para baixo\n");
            printf("5 - De cima para direita\n");
            printf("6 - De cima para esquerda\n");
            printf("7 - De baixo para direita\n");
            printf("8 - De baixo para esquerda\n");
            printf("Escolha uma opção:\n");
            scanf("%d", &lado);

            switch (lado){
            case 1: printf("Você escolheu: Da esquerda para cima\n");break;
            case 2: printf("Você escolheu: Da esquerda para baixo\n");break;
            case 3: printf("Você escolheu: Da direita para cima\n");break;
            case 4: printf("Você escolheu: Da direita para baixo\n");break;
            case 5: printf("Você escolheu: De cima para direita\n");break;
            case 6: printf("Você escolheu: De cima para esquerda\n");break;
            case 7: printf("Você escolheu: De baixo para direita\n");break;
            case 8: printf("Você escolheu: De baixo para esquerda\n");break;
            default: printf("Opção invalida!\n"); break;
            }

            if(lado == 1){  
            while (movCavalo < 1) {
            for (int i = 0; i < movCavalo2; i++) {
                printf("Esquerda\n");
            }
            printf("Cima\n");
            movCavalo++;
            }
            }
            else if(lado == 2){  
            while (movCavalo < 1) {
            for (int i = 0; i < movCavalo2; i++) {
                printf("Esquerda\n");
            }
            printf("Baixo\n");
            movCavalo++;
            }
            }
            else if(lado == 3){  
            while (movCavalo < 1) {
            for (int i = 0; i < movCavalo2; i++) {
                printf("Direita\n");
            }
            printf("Cima\n");
            movCavalo++;
            }
            }
            else if(lado == 4){  
            while (movCavalo < 1) {
            for (int i = 0; i < movCavalo2; i++) {
                printf("Direita\n");
            }
            printf("Baixo\n");
            movCavalo++;
            }
            }
            else if(lado == 5){  
            while (movCavalo < 1) {
            for (int i = 0; i < movCavalo2; i++) {
                printf("Cima\n");
            }
            printf("Direita\n");
            movCavalo++;
            }
            }
            else if(lado == 6){  
            while (movCavalo < 1) {
            for (int i = 0; i < movCavalo2; i++) {
                printf("Cima\n");
            }
            printf("Esquerda\n");
            movCavalo++;
            }
            }
            else if(lado == 7){  
            while (movCavalo < 1) {
            for (int i = 0; i < movCavalo2; i++) {
                printf("Baixo\n");
            }
            printf("Direita\n");
            movCavalo++;
            }
            }
            else if(lado == 8){  
            while (movCavalo < 1) {
            for (int i = 0; i < movCavalo2; i++) {
                printf("Baixo\n");
            }
            printf("Esquerda\n");
            movCavalo++;
            }
            }

            break;
            
            default: printf("Opção invalida\n"); continue;
            
        }

        printf("\nDeseja fazer outra jogada?(s/n): ");
        scanf(" %c", &continuar);
        

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
