#include <stdio.h>                                  
#include <conio.h>
#include <locale.h>
 
int fatorial(int x)                         
{
    int fat=0;                    
    for(fat = 1; x > 1; x--)
    {
        fat = x * fat;
    }
    return fat;                                     
}

int potencia(int base, int expoente)
{
	int cont, potencia=1;
	for(cont = 0; cont < expoente; cont++)
	{
		potencia = potencia * base;
	}
	return potencia;
}

int mdc(int x, int y)
{
	int r;
	while(y != 0){
		r = x % y;
		x = y;
		y = r;
	}
    return x;
}
 
int main ()
{
	int opc, n, b, exp, A, B, x;
	setlocale(LC_ALL, "portuguese");
	printf("MENU \n1. Cálculo de n! \n2. Cálculo de n elevado a x \n3. Encontrar o máximo divisor comum (MDC) entre dois números\n\nDigite a opção desejada: ");
	scanf("%d", &opc);
	if(opc == 1){
		printf("\n\n\nDigite um número inteiro positivo: ");
		scanf("%d", &n);
		x = fatorial(n);
		printf("\n%d! = %d", n, x);
	}
	else if(opc == 2){
		printf("\n\n\nDigite o valor da base: ");
		scanf("%d", &b);
		printf("Digite o valor do expoente: ");
		scanf("%d", &exp);
		x = potencia(b, exp);
		printf("\nPotência = %d", x);
	}
	else if(opc == 3){
		printf("\n\n\nDigite dois números: ");
		scanf("%d %d", &A, &B);
		x = mdc(A, B);
		printf("MDC = %d", x);
	}
	getch();
	return 0;
}
