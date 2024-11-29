#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[6];
    int x,y,tmp;

    // Gerar números aleatorios para o vetor
    for (x = 0; x < 6; x++) 
	{
        vetor[x] = rand() % 101; // 0 a 100
    }

	// Bubble Sort 
	for (x = 0; x < 5; x++) 					//O Bubble Sort vai empurrar os maiores elementos para o final a cada passagem	
	{
		for (y = 0; y < 6 ; y++)
		{
			if(vetor[y]>vetor[y+1])	// Se o elemento vetor[y] for maior que o próximo ("vetor[y + 1]"), os dois são trocados usando a variável tmp.
			{
			tmp=vetor[y]; 			//O primeiro, o valor de 'vetor[y]' é guardado em tmp
			vetor[y]=vetor[y+1];	
			vetor[y+1]=tmp;	       //O valor de 'vetor[y + 1]' é guardado em tmp
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

