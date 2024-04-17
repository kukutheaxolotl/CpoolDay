void print_char(char c);
void my_print_ascii(void);

void my_print_ascii(void)
{
    for (int i = 32; i < 127 ; i++){
        char c = i; 
        print_char(c);
    }
}