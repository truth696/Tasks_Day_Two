char * strrchr_my(char * msg_input,int  ch){
     while(*msg_input){
         ++msg_input;
    }
    while (*msg_input - 1  != msg_input[0]){
        if (*msg_input == (char)ch) { 
            return msg_input;
        }
        --msg_input;
    }
 return 0;
 }
