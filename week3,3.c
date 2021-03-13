#include <stdio.h>
int rec(int x, int y);
int main()
{
    int a,b, gcd,lcm;
    printf("Enter any number1:");
    scanf("%d",&a);
    printf("Enter no 2:");
    scanf("%d", &b);
    gcd=rec(a,b);
    lcm=(a*b)/gcd ;
    printf("gcd=%d\n\n",gcd);
    printf("lcm=%d\n\n",lcm);
    return 0;
}
int rec(int x , int y )
{
    if( y==0)
    {
        return x;
    }
    else{
        return rec(y,x%y);
    }  
}
