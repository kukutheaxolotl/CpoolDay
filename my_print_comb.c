#include <stdio.h>
#include <unistd.h>

int my_org(int a,int b,int c){
    if((a<b)&&(b<c)){
        return 1;
    }
    else{
        return 0;
    }
}
int my_print_comb(void){
    int a = 0;
    int b = 1;
    int c = 2;
    while(my_org(a,b,c)==1){
        c++
    }
}
int main(void){
    my_print_comb();
}