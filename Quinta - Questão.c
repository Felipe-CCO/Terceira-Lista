#include <stdio.h>

int main(){
	
	char texto[100];
	char texto2[100];

	printf ("Digite um texto que sera concatenado com  segundo: ");
	scanf ("%s", &texto);

	printf ("Digite um texto para ser concatenado com o primeiro: ");
	scanf ("%s", &texto2);

	printf ("%s %s",texto,texto2);				
}
