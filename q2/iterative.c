#include <stdio.h>

char smallest_character(char str[],char c)
{
    int i = 0;
    while(str[i]!='\0') {
        if(str[i]>c) {
            return str[i];
        }
        i++;
    }
    return str[0];
}


int main()
{
    char array[]= {'c','f','j','p','v'};
    char c='c';
    char result;
    result= smallest_character(array,c);
    printf("%c\n",result);
    return 0;
}