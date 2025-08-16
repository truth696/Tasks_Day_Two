#include <stdio.h>
#include <string.h>
#include "functions.h"

int main() {
    const int n = 50;
    const int s = 25;
    char arr[n];
    char arr1[n];;
    int count = 0;
    fgets(arr, s , stdin);
    fgets(arr1, s , stdin);
    int res = strspn_my(arr,arr1);
    printf("%d",res);
     
return 0;
}
