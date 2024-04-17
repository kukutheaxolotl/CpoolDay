void print_char(char c);
void my_print_ascii(void);
int main(void)
{
    my_print_ascii;
    return 0;
}
void my_print_ascii(void)
{
    for (int i = 33; i < 127 ; i++){
        char c = i; 
        print_char(c);
    }
}