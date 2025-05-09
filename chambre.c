#include <stdio.h>
#include <stdlib.h>

int main(){
	// Je veux la nombre de chambre que le client veux
	int N;
	printf("Donne un nombre: ");
	scanf("%d", &N);
	// j'alloue le nombre de chambre ici
	int *chambre = (int*)malloc(N*sizeof(int));
	while(chambre == NULL){
		printf("Pas Assez de memoire\n");
		return (1);
	}
	// Remplissage avec 42 boucles for
	for(int i=0; i<N;i++){
		chambre[i]=42;
	}
	// Affichage par le boucle for ici
	for(int j=0; j<N;j++){
		printf("|%d|", chambre[j]);
	}
	//je libere le chambre ici
	free(chambre);
return 0;
}
