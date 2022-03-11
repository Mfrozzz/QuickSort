#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#define MAX 100
using namespace std;

void quickSort (int vet[], int ini, int fim) {
    int esq, dir, pivo, aux, i;
    esq = ini;
    dir = fim;
    pivo = vet[(esq + dir) / 2];
    while (esq <= dir) {
	    while (vet[esq] < pivo) {
            esq = esq + 1;
        }    
        while (vet[dir] > pivo) {
            dir = dir - 1;
        }    
        if (esq <= dir) {
        
	        aux = vet[esq];

            vet[esq] = vet[dir];
            vet[dir] = aux;
          
            

            esq = esq + 1;
            dir = dir - 1;
        }     
    }
    if (ini < dir){
	    quickSort(vet, ini, dir);
    }
    if (fim > esq){
        quickSort(vet, esq, fim);
	}
}

int main () {
    int i;
    int vet[MAX];
    printf ("\nVALORES A ORDENAR\n");

	for(int q=0;q<100;q++){
		cin>>vet[q];
	}
    for (i = 0; i < MAX; i++){
        printf("%d  ", vet[i]);
    }
        
    for (i = 0; i < MAX; i++){
    	quickSort(vet,0,MAX-1);
    }
    printf ("\nVETOR ORDENADO\n");
		
    for (i = 0; i < MAX; i++){
        printf("%d  ", vet[i]);
    }
    return 0;
}
