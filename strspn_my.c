char strspn_my(const char* arr, const char* arr1){
    int count = 0;
    while (*arr) { 
        const char* copy = arr1;
        int chek = 0;
        while (*copy ) {
            if (*arr == *copy) {
                    chek = 1;
                    break;
                }
            ++copy;
        }
        if (!chek){
            break;
        }
        ++count;
        ++arr;
    }
    
return count;
}           
