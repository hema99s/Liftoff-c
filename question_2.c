/*Conversion of temperture from degree Fahrenheit*/
#include <stdio.h>
int main()
{
   int tf;  /*temperature in fahrenheit */
   float tc; /*tempertue in celsius */
   printf("\nEnter vatueof temperature in farhenheit");
   scanf("%d",&tf);
   /*formula of conversion*/
   tc=((tf-32)*5)/9; 
   printf("temperature in Celsius=%f\n",tc);
   return 0;
}

