
void strcpy_my(char* msg_input,char * msg_output, const int new_size) {
    for ( int i = 0 ;i < new_size; ++i) {
        msg_output[i]=msg_input[i];
    }
}
