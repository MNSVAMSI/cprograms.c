#include <stdio.h>
int main() {
    int n,i,sumeven=0,sumodd=0,diff=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
        sumeven=sumeven+i;
    }
    else{
        sumodd=sumodd+i;
    }
    }
    diff=sumeven-sumodd;
        printf("the difference is:%d",diff);
    }
