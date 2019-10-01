#include <stdio.h>

int main(){
	
	int i;
	char texto[100];
	char texto2[100];
	printf ("Digite um texto para tranfiri-lo para outra variavel e imprimi-lo: \n");
	scanf ("%s",texto);
	
	for(i=0; texto[i]!='\0'&& i<sizeof(texto); i++){
	texto2[i]=texto[i];
	}
	
	printf (" O texto impresso em outra variavel: \n %s",texto2);
					
}
