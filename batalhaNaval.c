#include <stdio.h>
 
#define linha 10
#define coluna 10

int main(){
               
        int tabuleiro[linha][coluna] = {0}; // Inicializa o tabuleiro com zeros
                
        // coordenadas dos navios
       int coordenadasNavios[31][2] = {
        {4, 2}, {5, 1}, {5, 2}, {5, 3}, {6, 0}, {6, 1}, {6, 2}, {6, 3}, {6, 4}, {7, 1}, {7, 2}, {7, 3}, {8, 2}, // navio 1
        {0, 2}, {1, 1}, {1, 2}, {1, 3}, {2, 0}, {2, 1}, {2, 2}, {2, 3}, {2, 4}, //navio 2
        {2, 7}, {3, 7}, {4, 5}, {4, 6}, {4, 7}, {4, 8}, {4, 9}, {5, 7}, {6, 7} //navio 3
        
    };
    
    // Preencher o tabuleiro com os navios
    for (int i = 0; i < 31; i++) {
        int linhaNavio = coordenadasNavios[i][0];
        int colunaNavio = coordenadasNavios[i][1];
        
        // Definindo valores para cada tipo de navio
        if (i < 13) {
            tabuleiro[linhaNavio][colunaNavio] = 1;  // Navio 1
        } else if (i < 22) {
            tabuleiro[linhaNavio][colunaNavio] = 2;  // Navio 2
        } else {
            tabuleiro[linhaNavio][colunaNavio] = 3;  // Navio 3
        }
    }
            printf("**** Tabuleiro de Batalha Naval ****\n");
                                  
            printf("  "); // espaço inicial para alinhar as colunas
        for (int j = 0; j < 10; j++) {
            printf(" %c", 'A' + j); // imprime horizontal de A a J
        }
            printf("\n");

        for (int i = 0; i < 10; i++) {
            printf("%2d ", i + 1); // imprime vertical de 1 a 10 (coloque %2d para alinhar os números)
        
            // Preenche e Imprime o tabuleiro com 0 
            for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); 
            }
            printf("\n");
    }
       
    return 0;
}