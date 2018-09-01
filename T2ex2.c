#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	int n, i = 100;
	printf("Digite um numero inteiro maior que 100: ");
	scanf("%i", &n);
	if (n % 2 != 0)
	{
		n = n - 1;
	}
	printf("\n100");
	while (i < n)
	{
		i = i + 2;
		printf("\n%i", i);
	}
	getch();
	return 0;
}
