#include <stdio.h>
#include <unistd.h>

int my_print_revalpha(void){
    char a_char = 122; 
    for(int i = 122; i > 96 ; i--){
        write(1, &a_char, 1);
        a_char--;
    }
    write(1,"\n",1);
}
int main(void){
    my_print_revalpha();
}