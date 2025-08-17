#include <stdio.h>
#include <string.h>
#include "functions.h"

int main() {
    const int n = 50;
    const int s = 25;

    char arr[n + 30] = {};
    char arr1[n] = {};

    printf("input your text\n");
    fgets(arr, s, stdin);
    arr[strcspn(arr, "\n")] = '\0';  

    printf("Input your text\n");
    fgets(arr1, s, stdin);
    arr1[strcspn(arr1, "\n")] = '\0';

    int res = strspn_my(arr, arr1);

    printf("%d\n", res);

    return 0;
}

