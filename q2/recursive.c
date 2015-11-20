/* FIXME: Implement! */
#include <stdio.h>
#include <stdlib.h>

char smallest_character_recursive(char str[],char c)
{
    if(*str>c){
        return *str;
    }else{
        str++;
        return smallest_character_recursive(str,c);
    }
}

int main()
    {
        char test[] = "cfjpv";
        printf("%c\n",smallest_character_recursive(test,'c'));
        return 0;
    }
