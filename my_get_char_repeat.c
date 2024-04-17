#include <stdio.h>
int my_get_char_repeat(char to_find, const char *to_search);

int my_get_char_repeat(char to_find, const char *to_search){
    if(to_search != NULL){
        int j = 0;
        for(int i=0;to_search[i]!='\0';i++){
            if(to_search[i]==to_find){
                j++;
            }
        }
        return j;
    }
    return 0;
}
