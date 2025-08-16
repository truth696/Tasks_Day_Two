int strcmp_my(char* arr, char* arr2, int n) {
    int i = 0;
    int results = 0;
    while (i < n) {
        if (arr[i] != arr2[i] || arr[i] == '\0' || arr2[i] == '\0') {
            results = arr[i] - arr2[i];
            return results;
        }    
        ++i;
    }
return results;
}
            
