void my_print_revert(char *toRevert);
void print_char(char c);

void my_print_revert(char *toRevert){
    for(int i = 9;i>=0;i--){
        print_char(toRevert[i]);
    }
}
