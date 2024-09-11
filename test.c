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
int b_comb(int a,int b,int c){
  int a = 0;
  int b = 1;
  int c = 2;
  while(a!=7){  
    while((my_org(a,b,c)==1))||(c<10)||(b<9){
      c++;
    }
    b++;
    c=b+1;
  }
}
int main(void){
    my_org(2,1,3);
}