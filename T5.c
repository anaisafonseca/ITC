#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int maior=0, menor;
	float soma=0, media, num[10];
	for(int x=0; x<10; x++){
    	printf("Digite o número %i: ", x+1);
    	scanf("%f", &num[x]);
    	while(num[x] < 0){
    		printf("Digite o número %i: ", x+1);
    		scanf("%f", &num[x]);
    	}
	}
	
	for(int y=0; y<10; y++){
		soma = soma + num[y];
	}
	printf("\nSoma: %.2f\n", soma);
 
	media = soma/10;
	printf("Média: %.2f\n", media);
 
	for(int z=0; z<10; z++){
		if (num[z] > maior) {
    		maior = num[z];
    	}
	}
	printf("Maior número: %i\n", maior);
 
	for(int a=0; a<10; a++){
		if (num[a] < menor) {
    		menor = num[a];
    	}
	}
	printf("Menor número: %i\n", menor);
	
	printf("Posições dos números acima da média:");
	for(int b=0; b<10; b++){
    	if (num[b] > media) {
    		printf("\n%i", b+1);
    	}
	}
	getch();
	return 0;
}
