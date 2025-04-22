#include <stdio.h>
#include <stdlib.h>

void modArr(int* arr, size_t s){
    for(size_t i = 0; i < s; ++i){
        arr[i]*=2;
    }
}
void printArr(int* arr, size_t s){
    for(int i = 0; i < s; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int iarr[] = {11, 22, 33, 44, 55};
    modArr(iarr, sizeof(iarr)/sizeof(int));
    printArr(iarr, sizeof(iarr)/sizeof(int));

    return EXIT_SUCCESS;
}