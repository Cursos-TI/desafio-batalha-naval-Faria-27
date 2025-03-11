#include <stdio.h>
// teste
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int navio2[2]={3 ,3};
    int navio3[3]={3 ,3 ,3};
    int cone[3][5]={
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    int octaedro[3][5]={
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    int cruz[3][5]={
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    int tabuleiro[10][10];
    for(int x=0; x<10; x++){
        for(int y=0; y<10; y++){
            tabuleiro[x][y] = 0;
        };
    };
    int jogo[10][10];
    for(int x=0; x<10; x++){
        for(int y=0; y<10; y++){
            jogo[x][y] = 0;
        };
    };
    //printf("navio de dois lugares= %d, %d\n", navio2[0], navio2[1]);
    //printf("navio de 3 lugares= %d, %d, %d\n", navio3[0], navio3[1], navio3[2]);
    for(int x=0; x<10; x++){
        for(int y=0; y<10; y++){
           if(y==7 && x<=1){
                jogo[x][y]= tabuleiro[x][y] + navio2[x];
            };
            if(y>=1 && y<=3 && x==8){
                jogo[x][y]= tabuleiro[x][y] + navio3[y-1];
            };
            if(y==x && y>=3 && y<=5){
                jogo[x][y]= tabuleiro[x][y] + navio3[y-3];
            };
            if(y==x && y>=7 && y<=10){
                jogo[x][y]= tabuleiro[x][y] + navio3[y-7];
            };
            if(y>=0 && y<=4 && x<=2){
                jogo[x][y]= tabuleiro[x][y] + cruz[x][y];
            };
            if(y>=1 && y<=5 && x>=5 && x<=7){
                jogo[x][y]= tabuleiro[x][y] + cone[x-5][y-1];
            };
            if(y>=5 && y<=9 && x>=3 && x<=5){
                jogo[x][y]= tabuleiro[x][y] + octaedro[x-3][y-5];
            };
            printf("%d ", jogo[x][y]);
        };
        printf("\n");
    };

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
