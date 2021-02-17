#include <stdio.h>
int main()
{
    int a[100],i,lar,sam;
    printf("enter the numbers here");
    for(i=0; i<100;i++)
    scanf("%d", &a[i]);
    lar=sam=a[0];
    for(i=1; i;i++){
        if(a[i],sam)
        sam=a[i];
        if(a[i]>lar)
        lar=a[i];
    }
    printf("smallest element=%d", sam);
    printf("largest element=%d",lar);
    return 0;
}