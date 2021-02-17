#include <stdio.h>
int main(void)
{
    int n,digi=0,sum=0,j,e;
    printf("\nEnter the Number\n")
    scanf("\n\n%d",n);
   e = n ;
   while( n>0){
       n=n/10;
       digi++;
   }
   int arr[digi];
   for( int i=0; i< digi; i++){
       arr[digi-i-1]=x%10;
       x=x/10;
   } 
   for(int j=0; j< digi;j++)
   {
       if(arr[j]%2==0 || (j+1)%2==0)
       sum =sum + arr[j];
   } printf("%d", sum);
  

}