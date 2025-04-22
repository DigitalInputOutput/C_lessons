#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int* ifget(void){
    static int puffer[MAX];
    for(int i = 0; i < MAX; i++){
        printf("%d \n",puffer[i]);
        printf("%p \n",&puffer[i]);
        printf("wert %d: \n", i+1);
        if(scanf("%d", &puffer[i]) != 1){
            printf("Fehler bei der Eingabe!\n");
            return EXIT_SUCCESS;
        }
    }

    return puffer;
}

void reset(int *ival){
    *ival = 0;
}

int main(){
    int *iptr = NULL; // Zeiger mit NULL initialisieren
    int ival1 = 0, ival2 = 0;

    // Initializirung: Zeiger erhält Adresse von ival1
    iptr = &ival1;

    // Derefernzierung mit dem Indirektionsoperator
    // ival1 erhält den Wert 123
    *iptr = 123;

    // Erhalt denselben Wert wie ival1
    ival2 = *iptr;

    printf("%d\n", ival2);

    // ival erhält die Summe aus ival2 und 100
    *iptr = ival2 + 100;

    // Zeiger erhält Adresse von ival2
    iptr = &ival2;

    printf("%d\n", *iptr);
    printf("%p\n", iptr);
    printf("%p\n", &ival1);
    printf("%p\n", &iptr);
    printf("%d\n", ival2);
    printf("%d\n", ival1);

    reset(&ival2); // reset to 0

    printf("%d\n", ival2);

    int* iptr3 = ifget();
    printf("folgende werte wurden eingelasen \n");
    for(int i = 0; i < MAX; i++){
        printf("%d: %d \n", i+1, *(iptr3 + i));
    }

    return EXIT_SUCCESS;
}