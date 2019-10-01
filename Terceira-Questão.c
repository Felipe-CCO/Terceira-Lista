#include <stdio.h>

int main(){
int i;
	int falso = 0;
	char texto[100];
	char texto2[100];
	
	printf ("Digite um texto para ser comparado com um segundo: ");
	scanf ("%s", &texto);
	
	printf ("Digite um texto para ser comparado com o primeiro: ");
	scanf ("%s", &texto2);
	
	for (i = 0; texto[i]!='\0' && i<sizeof (texto); i++) 
	{
	
		if (texto[i] != texto2[i] || texto2[i] != texto[i] ){
			printf ("Os textos são diferentes \n");
		falso++;
		break;
		}
	}
	if (falso == 0){
		printf("Os textos sao iguais \n");
	}
}
