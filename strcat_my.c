#include "functions.h"
void strcat_my(char* msg_input, const char * msg_end, int n ) {

    int i = 0;
    int j = 0;

    while (msg_input[i]) {
        ++i;
    }
    for (j = 0; i+j+1<n; ++j) {
        msg_input[i + j] = msg_end[j];
    }
    
}
            
