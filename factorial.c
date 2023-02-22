#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,result=1;
    printf("Enter the n value: ");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        result=result*i;
        i--;
    }
    printf("Factorial of %d = %d",n,result);
    return 0;
}
