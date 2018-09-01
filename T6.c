#include <stdio.h>												
#include <conio.h>
#include <locale.h>

void trocar(char str[], int x)									
{
	int vet[x], nvet = 0, n;									
	for(n = 0; str[n] != '\0'; n++)								
	{
		if(str[n] == ' ')										
		{
			str[n] = '_';
			vet[nvet] = n + 1;
			nvet++;
		}
	}
	printf("\n\nNova string gerada: %s", str);						
	printf("\n\nPosições em que haviam espaços: ");					
	for(n = 0; n != nvet; n++)								
	{
		printf("%d ", vet[n]);
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");						
	const int x = 200;										
	char str[x];											
	printf("Digite uma string: ");							
	fflush(stdin);											
	gets(str);												
	trocar(str, x);												
	getch();												
	return 0;													
}
