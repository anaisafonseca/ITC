#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	int n, i;
	printf("Digite um numero inteiro maior que 1: ");
	scanf("%i", &n);
	if (n % 2 == 0)
	{
		n = n - 1;
		printf("\n%i", n);
	}
	while (n > 1)
	{
		n = n - 2;
		printf("\n%i", n);
	}
	getch();
	return 0;
}
