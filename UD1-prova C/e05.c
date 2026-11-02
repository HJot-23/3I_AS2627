// inserire 4 valori da tastiera, stampare i valori compresi tra 10 e 20 estremi inclusi e sommare solo quelli inclusi tra 10 e 20 .

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int somma = 0;
    char junk;

        //inserisci i valori delle variabili
    printf("Inserisci il valore a: ");
    scanf("%d" , &a);
    junk = getchar();

    printf("Inserisci il valore b: ");
    scanf("%d" , &b);
    junk = getchar();

    printf("Inserisci il valore c: ");
    scanf("%d" , &c);
    junk = getchar();

    printf("Inserisci il valore d: ");
    scanf("%d" , &d);
    junk = getchar();

    printf("%d,%d,%d,%d",a,b,c,d);

    //n
    if((a >= 10) && (a <= 20)){
         printf("Valore a:%d\n",a);
        somma= somma + a;
    }
       
    
    if((b >= 10) && (b <= 20)){
         printf("Valore b:%d\n",b);
        somma= somma + b;
    }
        

    if((c >= 10) && (c <= 20)){
        printf("Valore c:%d\n",c);
        somma= somma + c;
    }
        

    if((d >= 10) && (d <= 20)){
        printf("Valore d:%d\n",d);
        somma= somma + d;
    }
        
    printf("\nSomma dei valori idonei: %d\n", somma);

    return 0;

}
    




