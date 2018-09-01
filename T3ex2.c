#include <stdio.h>                                                     
#include <conio.h>
#include <locale.h>
 
void tabela(int af);                                                   
 
int main()
{
    int a, b = 1;                                                       
    setlocale(LC_ALL, "portuguese");
    printf("Digite o número de linhas a serem apresentadas: ");
    scanf("%d", &a);
    while(a > 0)                                                        
    {
        tabela(c);                                                     
        printf("\n");                                                 
        a--;                                                          
        c++;                                                          
    }
    getch();                                                           
    return 0;                                                           
}
 
void tabela(int af)                                                     
{
    int bf, cf = 0, df;                                                
    bf = af;
    while (bf > 0)                                                     
    {
        df = af * (cf + 1);                                             
        printf("%d ", df);                                              
        cf++;                                                           
        bf--;                                                          
    }
}
