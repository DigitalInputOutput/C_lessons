#include <stdio.h>
#include <stdlib.h>

int main(){
    int iarr[] = {12, 34, 56, 78, 90, 21, 43};
    int *ptr1 = NULL, *ptr2 = NULL;

    ptr1 = iarr;
    ptr2 = &iarr[4];

    ptr1+= 2; // 2 elem in arr
    ptr2++; // 5 elem in arr

    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
    printf("%td\n", ptr2 - ptr1); // 5 - 2 = 3 elem in arr
    printf("%d\n", (ptr1 < ptr2)); // 1 (true) 2 < 5
    printf("%d\n", ((*ptr1) < (*ptr2))); // 0 (false) 56 < 21 
    printf("%d\n", ((*ptr1) > (*ptr2))); // 1 (true) 56 > 21
    printf("%d\n", *ptr1);
    printf("%d\n", ((*ptr1--) > (*ptr2))); // 1 (true) 34 > 21
    printf("%d\n", *ptr1);
    printf("%d\n", ((*--ptr1) > (*ptr2))); // 0 (false) 12 > 21
    printf("%d\n", *ptr1);
    printf("%d\n", ((*ptr1--) > (*ptr2))); // 0 (false) 0 > 21
    printf("%d\n", *ptr1);

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