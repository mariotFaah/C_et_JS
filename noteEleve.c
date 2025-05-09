#include<stdio.h>
#include<stdlib.h>

void stock_note();
int main(){

stock_note();
return 0;
}

// Ato isika dia mitahiry ireo noten'ny mpianatra am , antsoy ito fonction ito
void stock_note(){
	// atao ato anatin'ito ny isan'ny mpianatra
	int mpianatra;
	printf("Firy ny isan'ny mpianatra");
	scanf("%d", &mpianatra);
	int *note;
	note = (int*) malloc(mpianatra * sizeof(int));
	if (note == NULL){
		printf("tsy afaka mamorona fafana intsony\n");
	}
	// Rehefa voarefy zay ny haben'ny tableau dia tonga am fampidirana donnee ao anatiny isika
	for(int i=0; i<mpianatra; i++){
		printf("Entrer le premier note");
		scanf("%d", &note[i]);
	}
	// Hampiseho ireo zavatra anaty fafana amin'izay isika eto
	for (int i = 0; i <mpianatra; i++){
		printf("%d-la note des eleves est: %d/20\n",i+1,note[i] );	
	}
	
	free(note);
}
