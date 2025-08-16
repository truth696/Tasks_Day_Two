char * strchr_my(char * msg_input,int  ch){
     while(*msg_input){
        if (*msg_input == (char)ch) {
            return msg_input;
        }
        ++msg_input;
    }  
return 0;
}
mi
