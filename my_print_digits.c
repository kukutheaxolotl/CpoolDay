#include <stdio.h>
#include <unistd.h>

int my_print_digits(void){
    char digits =48; 
    for(int i = 48; i < 58 ; i++){
        write(1, &digits, 1);
        digits++;
    }
    write(1,"\n",1);
}
int main(void){
    my_print_digits();
}