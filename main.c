#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    system("color F0");
    float valor,cont,quantidade;
    char sair;
    do{
        system("cls");
        printf("Irei dizer quantas moedas de cada tipo s%co necess%crias para formar certa quantia de reais!\nQuantos reais? ",-58,-96);
        scanf("%f",&valor);
        printf("\nVoc%c vai precisar de:\n",-120);
        for (valor*=100,cont=0,quantidade=-1;cont<=valor;cont+=100,quantidade++){}
        printf("%.0f moeda(s) de 1 real,\n",quantidade);
        for (valor-=(quantidade*100),cont=0,quantidade=-1;cont<=valor;cont+=50,quantidade++){}
        printf("%.0f moeda de 50 centavos,\n",quantidade);
        for (valor-=(quantidade*50),cont=0,quantidade=-1;cont<=valor;cont+=25,quantidade++){}
        printf("%.0f moeda de 25 centavos,\n",quantidade);
        for (valor-=(quantidade*25),cont=0,quantidade=-1;cont<=valor;cont+=10,quantidade++){}
        printf("%.0f moeda(s) de 10 centavos,\n",quantidade);
        for (valor-=(quantidade*10),cont=0,quantidade=-1;cont<=valor;cont+=5,quantidade++){}
        printf("%.0f moeda de 5 centavos,\n",quantidade);
        for (valor-=(quantidade*5),cont=0,quantidade=-1;cont<=valor;cont++,quantidade++){}
        printf("%.0f moeda(s) de 1 centavo.\n",quantidade);
        printf("Aperte enter para recome%car ou esc para sair!",-121);
        do{
            sair=getch();
        }while(sair!=13 && sair!=27);
    }while(sair==13);
    return 0;
}
