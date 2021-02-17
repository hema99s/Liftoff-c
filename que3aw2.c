#include <stdio.h>
#include <string.h>

int main()
{
   char w[100];
    int  length;
    printf("Enter the word here");
    gets(w);
    length = strlen(w);
    int strlen(char *s)
    {
        int length=0;
        while(*s !='\0')
        {
            length++;
            s++;
        }
    }
    printf("length=%d\n",length);
    return(length);
}