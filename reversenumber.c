#include <stdio.h>
void main() {
    int rev=0,n,rem;
    printf("enter n value:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
}
