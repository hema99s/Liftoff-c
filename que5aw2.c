#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows :");
    scanf("%d", &n);
    for(i=0 ; i<n; i++)
    {
        for(j=0;j<n;j++){
            if(i==j || i==n-1-j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
