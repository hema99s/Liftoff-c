#include <stdio.h>
float square(float);
int main()
{
    float a,b;
    printf("Enter any number");
    scanf("%f", &a);
    b= square(a);
    printf("Square of %f is %f\n", a,b);
    return 0;
}
float square(float X)
{
    float y;
    y=X*X;
    return(y);
}