#include <stdio.h>
#include <stdlib.h>

int main(){
    char *german[] = {
        "eins","zwei","drei","vier","fünf",
        "sechs","sieben","acht","neun","zehn"
    };
    char *english[] = {
        "one","two","three","four","five",
        "six","seven","eight","nine","ten"
    };

    int ival = 0;

    printf("Bitte geben Sie eine Zahl zwischen 1 und 10 ein: ");
    if(scanf("%d", &ival) != 1){
        printf("Fehler bei der Eingabe!\n");
        return EXIT_FAILURE;
    }else if(ival < 1 || ival > 10){
        printf("Die Zahl muss zwischen 1 und 10 liegen!\n");
        return EXIT_FAILURE;
    }else{
        printf("Ganzzahl: %d\n", ival);
        printf("Deutsch: %s\n", german[ival-1]);
        printf("Englisch: %s\n", english[ival-1]);
    }

    return EXIT_SUCCESS;
}