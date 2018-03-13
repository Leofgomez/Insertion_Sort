/*
	Name: Estudando insertion sort
	Copyright: 
	Author: Leonardo Fernandes Gomez
	Date: 11/05/16 19:01
	Description: Estudo de insertion sort
*/

#include <stdio.h>
#include <stdlib.h>

void insertionSortC(int array[], int tamanho) {
      int i, j, tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] > array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}

main(){
	int tamdigi, result,i=0;
	printf("\t Digite a quantidade de numeros: ");
	scanf("%d", &tamdigi);
	int numdigi[tamdigi];
		for (i=0; i < tamdigi; i++){
			printf("Digite o numero que ocupara a posicao %d:  ", i+1);
			scanf("%d",&numdigi[i]);
		}
	insertionSortC (numdigi,tamdigi);
	printf("Numeros em ordem: ");
	
	 for( i=0; i < tamdigi; i++){
      printf("\n\t\t\t%d", numdigi[i]);
	}
}
