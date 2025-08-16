char strspn_my(const char* arr, const char* arr1){
    int count = 0;
     for (int i = 0;*arr1 != '\0';) { 
        for (int j = 0; *arr != '\0';) {
            if (arr1[i] != arr[j]) {
                ++j;
            } else {
                ++i;
                j = 0;
                ++count;
            }
        }
    }
return count;
}           
