/*Conversion of temperture from degree Fahrenheit*/
#include <stdio.h>
int main()
{
   int tf;  /*temperature in fahrenheit */
   float tc; /*tempertue in celsius */
   printf("\nEnter vatueof temperature in farhenheit");
   scanf("%f",&tf);
   /*formula of conversion*/
   tc=5/9*tf-32; 
   printf("temperature in Celsius=%f\n",tc);
   return 0;
}

