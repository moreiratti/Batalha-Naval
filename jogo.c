#include <stdio.h>

int main(){
char linha [10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
int tabuleiro[10][10];

// Inicializa o tabuleiro com água (0)
  for (int i = 0; i < 10; i++) {
   for (int j = 0; j < 10; j++) {
    tabuleiro[i][j] = 0;
     }
    }
    
   // Imprimir cabeçalho (números das colunas)
    printf("   ");  // Espaço para o canto superior esquerdo
    for (int j = 1; j <= 10; j++) {
        printf("%2d ", j);
    }
    printf("\n");


 //  navio na vertical 
    int linha_inicio = 1; // B = índice 1
    int coluna = 2;       // Coluna 3 = índice 2

    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_inicio + i][coluna] = 3 ;  // Marca as posições com 3 (navio)
    }   
     // Adiciona navio HORIZONTAL 
    int linha_horizontal = 8;    // I = índice 8
    int coluna_inicio_horizontal = 6; // Coluna 8 = índice 6
    for (int j = 0; j < 3; j++) {
        tabuleiro[linha_horizontal][coluna_inicio_horizontal + j] = 3;
    }
  // Adiciona navio DIAGONAL (diagonal principal)
int linha_diagonal = 5; // G (índice 6)
int coluna_diagonal = 5; // Coluna 1 (índice 0)

for (int i = 0; i < 3; i++) {
    tabuleiro[linha_diagonal + i][coluna_diagonal + i] = 3; // Marca navio na diagonal
}

// Adiciona navio DIAGONAL INVERTIDA
int linha_diagonal_inv = 7;   // Começa em B (índice 1)
int coluna_diagonal_inv = 2;  // Coluna 6 (índice 5)

for (int i = 0; i < 3; i++) {
    tabuleiro[linha_diagonal_inv + i][coluna_diagonal_inv - i] = 3;
}



    // Imprimir linhas do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf(" %c ", linha[i]);  // Letra da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

 
  
   
  
  
  
  
  
  
  
  
 return 0;  
  }