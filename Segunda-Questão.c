#include <stdio.h>

int main(){
	
	char s[20];
	int i, contador = 0;
	
	printf("Escreva um texto: ");
	gets (s);
	for (i = 0; s[i] != '\0' && i < sizeof(s); i++){
		if (s[i] == 'a' || s[i] == 'e' || 
		s[i] == 'i' || s[i] == 'o' || 
		s[i] == 'u' || s[i] == 'A' || 
		s[i] == 'E' || s[i] == 'I' || 
		s[i] == 'O' || s[i] == 'U')
		contador ++;
	}
	printf ("O texto possui %d caracteres\n", i);
	printf ("quantidade de vogais %d", contador);
	
}
