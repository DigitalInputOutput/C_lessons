#include <stdio.h>
#include <stdlib.h>

double addition(double a, double b){
    return a + b;
}
double substraction(double a, double b){
    return a - b;
}
double multiplikation(double a, double b){
    return a * b;
}
double division(double a, double b){
    return a / b;
}
double (*fptr[4])(double d1, double d2) = {
    addition, substraction, multiplikation, division
};

int main() {
    double v1 = 0.0, v2 = 0.0;
    int operator = -1;

    printf("Zahl1:-> ");
    if(scanf("%lf", &v1) != 1){
        printf("Fehler bei der Eingabe \n");
        return EXIT_FAILURE;
    }
    printf("Zahl2:-> ");
    if(scanf("%lf", &v2) != 1){
        printf("Fehler bei der Eingabe \n");
        return EXIT_FAILURE;
    }

    printf("Operator: 0 = +\n 1 = -\n 2 = *\n 3 = / \n");
    if(scanf("%d", &operator) != 1){
        printf("Fehler bei der Eingabe\n");
        return EXIT_FAILURE;
    }
    if(! (operator >= 0 && operator <= 3)){
        printf("Fehler bei der Eingabe \n");
        return EXIT_FAILURE;
    }

    printf("Ergebnis: %lf\n", fptr[operator](v1, v2));

    return EXIT_SUCCESS;
}