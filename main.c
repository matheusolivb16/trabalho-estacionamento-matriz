#include <stdio.h>
// usei uma matriz 10 por 10 para criar o estacionamento, após isso, criei um
// loop para colocar e retirar as matrículas dos funcionários da matriz, de
// acordo com a entrada e saída deles.

int main(void) {
  int estacionamento[10][10], l, c, i, vagas = 100;
  int x, y, z;
  int aux, j;

  for (l = 0; l < 10; l++) {
    for (c = 0; c < 10; c++) {

      estacionamento[l][c] = 0;

      printf("%d ", estacionamento[l][c]);
    }
    printf("\n");
  }

  while (vagas >= 0) {
    for (l = 0; l < 10; l++) {
      for (c = 0; c < 10; c++) {

        printf("ola, bem vindo ao estacionamento do IFCE, aperte 1 para "
               "entrada ou 2 para saida \n");
        scanf("%d", &i);

        if (i == 1) {
          z++;
          printf("qual seu numero de matricula \n");
          scanf("%d", &x);
          printf("qual o numero de sua placa \n");
          scanf("%d", &y);
          printf("entrada liberada \n \n");
          vagas--;
          for (l = 0; l < 10; l++) {
            for (c = 0; c < 10; c++) {
              if (estacionamento[l][c] == 0) {
                estacionamento[l][c] = x;
                break;
              }
            }
            if (estacionamento[l][c] == x) {
              break;
            }
          }
          if (vagas == 0)
            printf("estacionamento lotado \n");
        }

        else if (i == 2) {
          printf("qual seu numero de matricula \n");
          scanf("%d", &aux);
          z--;
          for (l = 0; l < 10; l++) {
            for (c = 0; c < 10; c++) {
              if (aux == estacionamento[l][c]) {
                estacionamento[l][c] = 0;
              }
            }
          }
        }

        else if (i != 1 && i != 2) {
          printf("opcao invalida \n");
        }

        for (l = 0; l < 10; l++) {
          for (c = 0; c < 10; c++) {
            printf("%d ", estacionamento[l][c]);
          }
          printf("\n");
        }
      }
    }
  }

  return 0;
}