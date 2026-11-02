#include <stdio.h>

int main(){
    int a;
    int b;
    int tmp; //variabile temporanea per eseguire lo scambio di a e b 
    char junk;

    a = 0;
    b = 0;

    //inserisci i valori delle variabili
    printf("Inserisci il valore a: ");
    scanf("%d" , &a);
    junk = getchar();

    printf("Inserisci il valore b: ");
    scanf("%d" , &b);
    junk = getchar();

    printf("Valori inseriti: %d ,%d\n" ,a , b);
    printf("\n");

    //scambio i valori alle variabili 
    tmp = a;
    a = b;
    b = tmp;
    // per vedere i valori scambiati 
    printf("Valori scambiati: %d ,%d\n ",a , b);
    printf("\n");



}