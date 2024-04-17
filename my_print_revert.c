void my_print_revert(char *toRevert);
void print_char(char c);
int my_strlen(char *src);

void my_print_revert(char *toRevert){
    for(int i =my_strlen(toRevert);i>0;i--){
        print_char(toRevert[i]);
    }
}
int my_strlen(char *src){
    int j =0;
    for(int i = 0; src[i] != '\0'; i++){
        j = i;
    }
    return j;
}

