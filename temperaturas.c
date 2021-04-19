#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float celcius(float celcius, int escalaConversao){
    float f, k;
    if(escalaConversao == 1){
        //Fahrenheit -> F = C*(1,8)+32
        f = celcius*(1,8)+32;
        printf("\nA Conversão é %.2f", f);    
    }else if(escalaConversao == 2){
        //Kelvin -> K = C + 273,15
        k = celcius + 273,15;
        printf("\nA Conversão é %.2f", k);
    }
}
float fahrenheit(float fahrenheit, int escalaConversao){
    float c, k;
    if(escalaConversao == 1){
        //Celsius -> C = (F ? 32)/1,8
        c = (fahrenheit - 32)/1,8;
        printf("\nA Conversão é %.2f", c);
    }else if(escalaConversao == 2){
        //Kelvin -> K = (F-32)/1,8 + 273,15
        k = (fahrenheit - 32) / 1,8 + 273,15;
        printf("\nA Conversão é %.2f", k);
    }
}
float kelvin(float kelvin, int escalaConversao){
    float c, f;
    if(escalaConversao == 1){
        //Celcius -> C = K ? 273,15
        c = kelvin - 273,15;
        printf("\nA Conversão é %.2f", c);
    }else if(escalaConversao == 2){
        //Fahrenheit -> F = 1,8(K-273) + 32
        f = 1,8 * (kelvin - 273) + 32;
        printf("\nA Conversão é %.2f", f);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    float valorTemperatura;
    int escalaAtual, escala;

    printf("Digite o valor da temperatura: ");
    scanf("%f", &valorTemperatura);

    printf("\n1- Celcius\n2- Fahrenheit\n3- Kelvin");

    printf("\nDigite o valor da escala atual: ");
    scanf("%i", &escalaAtual);

    switch(escalaAtual){
        case 1 :
        //Celcius
            printf("\n1- Fahrenheit\n2- Kelvin");
            printf("\nDigite a escala que deseja alteração: ");
            scanf("%i", &escala);
            celcius(valorTemperatura, escala);
            break;
        case 2 :
        //Fahrenheit
            printf("\n1- Celsius\n2- Kelvin");
            printf("\nDigite a escala que deseja alteração: ");
            scanf("%i", &escala);
            fahrenheit(valorTemperatura, escala);
            break;
        case 3 :
        //Kelvin
            printf("\n1- Celsius\n2- Fahrenheit");
            printf("\nDigite a escala que deseja alteração: ");
            scanf("%i", &escala);
            kelvin(valorTemperatura, escala);
            break;      
        default:
            printf("ERRO!");
            break;
    }    


    return 0;
}