#include <stdio.h>
#include <conio.h>

int main()
{
    float codestado, pesototal, codcarga, pesokg, valorcam, imp, impestado, precokg, precocarga;
    printf("Digite o codigo do estado de origem da carga do caminhao: ");
    scanf("%f", &codestado);
    printf("Digite o peso da carga do caminhao em toneladas: ");
    scanf("%f", &pesototal);
    printf("Digite o codigo da carga: ");
    scanf("%f", &codcarga);
    if(codestado == 1)
    {
        imp = 35;
        impestado = 0.350;
        if(codcarga >= 10 && codcarga <= 20){
            precokg = 100;
        }
        else if(codcarga >= 21 && codcarga <= 30){
            precokg = 250;
        }
        else if(codcarga >= 31 && codcarga <= 40){
            precokg = 340;
        }
    }
    else if(codestado == 2)
    {
        imp = 25;
        impestado = 0.250;
        if(codcarga >= 10 && codcarga <= 20){
            precokg = 100;
        }
        else if(codcarga >= 21 && codcarga <= 30){
            precokg = 250;
        }
        else if(codcarga >= 31 && codcarga <= 40){
            precokg = 340;
        }
    }
    else if(codestado == 3)
    {
        imp = 15;
        impestado = 0.150;
        if(codcarga >= 10 && codcarga <= 20){
            precokg = 100;
        }
        else if(codcarga >= 21 && codcarga <= 30){
            precokg = 250;
        }
        else if(codcarga >= 31 && codcarga <= 40){
            precokg = 340;
        }
    }
    else if(codestado == 4)
    {
        imp = 5;
        impestado = 0.050;
        if(codcarga >= 10 && codcarga <= 20){
            precokg = 100;
        }
        else if(codcarga >= 21 && codcarga <= 30){
            precokg = 250;
        }
        else if(codcarga >= 31 && codcarga <= 40){
            precokg = 340;
        }
    }
    else if(codestado == 5)
    {
        imp = 0;
        impestado = 0.0;
        if(codcarga >= 10 && codcarga <= 20){
            precokg = 100;
        }
        else if(codcarga >= 21 && codcarga <= 30){
            precokg = 250;
        }
        else if(codcarga >= 31 && codcarga <= 40){
            precokg = 340;
        }
    }
    pesokg = pesototal * 1000;
    valorcam = (1 + impestado) * (precokg * pesokg);
    precocarga = (precokg * pesokg);
    printf("Peso da carga do caminhao em quilogramas: %.0f", pesokg);
    printf("\nPreco da carga do caminhao em reais: %.0f", precocarga);
    printf("\nValor do imposto sobre o valor da carga em porcentagem: %.0f", imp);
    printf("\nValor total transportado pelo caminhao em reais: %.2f", valorcam);
    getch();
    return 0;
}
