#include <stdio.h>                                  
#include <conio.h>
#include <locale.h>
 
double fatorial(double af)                         
{
    int bf, cf = 1, cfcont = 1;                    
    for (bf = 1; af > bf; bf++)
    {
        cf = cf * (cfcont + 1);
        cfcont++;
    }
    return cf;                                     
}
 
int main()
{
    double den = 0, num = 63, a = 20, b = 0;        
    setlocale(LC_ALL, "portuguese");
    while (a >= 0)                                  
    {
        b += num / fatorial(den);                   
        num -= 2;                                   
        den++;                                      
        a--;                                        
    }
    printf("O resultado da soma é %.4lf", b);     
    getch();                                        
    return 0;                                      
}
