#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * int_to_str(int num){
    int is_negative = 0;
    int temp = num;
    int length = 0;

    // if num is 0, just return string 0
    if(num == 0){
        char* zero = malloc(2);
        zero[0] = 0;
        zero[1] = '\0';
        return zero;
    }

    // if num is negative -123, set is_negative flag and make num positive
    if(num < 0){
        is_negative = 1;
        temp = -temp;
        num = -num;
    }

    // count how much digits num has 
    while(temp > 0){
        temp /= 10;
        length++;
    }

    int total_length = length + is_negative;
    char* str = malloc(total_length + 1); // with \0 terminator
    if(!str) return NULL;

    str[total_length] = '\0'; // add null terminator

    for(int i = total_length - 1; i >= 0; i--){
        if(i == 0 && is_negative){
            str[i] = '-';
            break;
        }
        str[i] = (num % 10) + '0'; // turn digiti into string
        num /= 10;
    }

    return str;
}

int main(){

    int n = -556;
    int *pn = NULL;
    pn = &n;
    char* s = int_to_str(n);
    printf("%d\n", n);
    printf("%d\n", s);
    printf("%p\n", (void*)s);
    printf("%p\n", (void*)pn);
    printf("%s\n", s);
    free(s);

    return EXIT_SUCCESS;
}