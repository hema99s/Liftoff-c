
#include <stdio.h>
int main()
{
    int n , digi=0,sum=0;
    printf("Enter any number" );
    scanf("%d",&n);
    while( n>0 ){
        sum = sum +n%10;
        n=n/10;
        digi+=1;
    }

    printf("%d",sum);
    return 0;
    
}