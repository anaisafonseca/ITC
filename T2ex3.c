#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	float cap, mont, temp, juro;
	printf("Digite a divida do cartao de credito: ");
	scanf("%f", &cap);
	temp = 12 * 3;
	while (temp > 0)
	{
		juro = cap * 0.075;
		mont = cap + juro;
		cap = mont;
		temp--;
	}
	printf("\nO valor da divida apos 3 anos sera R$%.2f", cap);
	getch();
	return 0;
}
