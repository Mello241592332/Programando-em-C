#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[6];
    int x,y,tmp;

    // Gerar n�meros aleatorios para o vetor
    for (x = 0; x < 6; x++) 
	{
        vetor[x] = rand() % 101; // 0 a 100
    }

	// Bubble Sort 
	for (x = 0; x < 5; x++) 					//O Bubble Sort vai empurrar os maiores elementos para o final a cada passagem	
	{
		for (y = 0; y < 6 ; y++)
		{
			if(vetor[y]>vetor[y+1])	// Se o elemento vetor[y] for maior que o pr�ximo ("vetor[y + 1]"), os dois s�o trocados usando a vari�vel tmp.
			{
			tmp=vetor[y]; 			//O primeiro, o valor de 'vetor[y]' � guardado em tmp
			vetor[y]=vetor[y+1];	
			vetor[y+1]=tmp;	       //O valor de 'vetor[y + 1]' � guardado em tmp
			}
		}
	}
    // Imprime o vetor
    for (x = 0; x < 6; x++) 
	{
     
	 
	    printf("%d ", vetor[x]);
    }

    return 0;
}

