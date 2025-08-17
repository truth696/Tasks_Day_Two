void strcat_my(char* msg_input,  char* msg_end) {

    int i = 0;
    int j = 0;

    while (msg_input[i]) {
        if (msg_input[i] == '\n'){
            msg_input[i]= ' ';
            }
        ++i;
    }
    while (msg_end[j]) {
        msg_input[i-1 + j] = msg_end[j];
        ++j;
    }
    
}
            
