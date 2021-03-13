#include <stdio.h>
int main()
{
    int n,rev, rem, ori; //rem is remaider , rev is reverse and original no is ori.
    printf("Enter no to check its palindromacity:");
    scanf("%d\n", &n);
    ori=n;
    while(n!=0)
    {
        rem=n%10;
        rev= rev*10 + rem;
        n /=10;
    }
    if(ori==rev)

        printf("%d is palindrome", ori);
    
    else
    
     printf("%d is not palindrome", ori) ;
     return 0;  

}