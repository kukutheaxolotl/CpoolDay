void my_print_n_ascii(int howMany);
void print_char(char c);

void my_print_n_ascii(int howMany)
{
    if(((howMany+33)>33)&&((howMany+33)<127)){
        for(int i = 33 ;i<(howMany +33);i++){
            char c = i; 
            print_char(c);
            }
    }
}