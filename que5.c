#include<stdio.h>
int main() 
{
int alphabets;
printf("Enter the english alphabets");
scanf("%c", &alphabets);

switch (alphabets)
{
case 'a': 
case 'e': 
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("vowel");

    break;

default:printf("consonant");
    break;
}
}