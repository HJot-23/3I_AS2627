/*
        Data: 20.10.2026
        Author: Harjot Singh
        DEscription: Semplice programma che somma due valori rischiesti in input .
*/
#include <stdio.h>

int main() {
    // dichiarazione delle variabili necessarie al nostro algoritmo.
    int a;
    int b;
    int c;
    // junk é usata per pulire il buffer nelle frasi di input.
    char junk;

    // inizializzazione delle variabili 
    a = 0;
    b = 0;
    c = 0;

    // fase di input dei valori A e B
    printf("Inserisci il valore a: ");
    scanf("%d" , &a);
    junk = getchar();

    printf("Inserisci il valore B: ");
    scanf("%d" , &b);
    junk = getchar();

    // calcola in C la somma dei valori A e B
    c = a + b;

    // comunico il valore della somma 
    printf("La somma vale: %d" , c);

    return 0;
}

   

