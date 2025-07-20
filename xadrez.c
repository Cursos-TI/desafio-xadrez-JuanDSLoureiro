#include <stdio.h>

/*
Você deverá criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha. Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.

Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L". Para este desafio, o Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda.
*/
int main(){
    int torre,bispo,rainha,xcavalo,ycavalo;
    //Torre
    printf("Movimento da Torre: \n");
    for ( torre = 0; torre < 5; torre++)
    {
        printf("Direita \n");
    }
    
    //Bispo
    printf("\nMovimento do Bispo: \n");
    bispo = 0;
    while (bispo < 5)
    {
        printf("Cima Direita \n");
        bispo++;
    }
    
    //Rainha
    printf("\nMovimento da Rainha: \n");
    rainha = 0;
    do
    {
        printf("Esquerda \n");
        rainha--;
    } while (rainha > -8);
    
    //Cavalo
    printf("\nMovimento do Cavalo: \n");
    xcavalo = 0;
    do
    {
        for (ycavalo = 0; ycavalo > -2; ycavalo--)
        {
            printf("Baixo \n");
        }
        printf("Esquerda \n");
        xcavalo--;
    } while (xcavalo > -1);
    

}