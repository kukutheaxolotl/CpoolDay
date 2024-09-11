#include <stdio.h>
#include <unistd.h>

int my_print_alpha(void){
    char a_char = 97; 
    for(int i = 97; i < 123 ; i++){
        write(1, &a_char, 1);
        a_char++;
    }
    write(1,"\n",1);
}
int main(void){
    my_print_alpha();
}