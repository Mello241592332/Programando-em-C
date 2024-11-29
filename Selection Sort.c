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

	// Selection Sort 
	for (x = 0; x < 5; x++) 
	
	{
		for (y = x+1; y < 6; y++)
		{
			if(vetor[y]<vetor[x]) 				// Se vetor[y] < vetor[x] , significa que encontramos um valor menor que vetor[x],																							
			{
			tmp=vetor[x];
			vetor[x]=vetor[y];					// Ent�o o valor de 'vetor[x]' e 'vetor[y]' s�o trocados.
			vetor[y]=tmp;	       				// o valor de 'vetor[x]', para depois realizar a troca sem perder dados.
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

