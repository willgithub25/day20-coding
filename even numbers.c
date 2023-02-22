#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("First even numbers are:\n", n);
    i=1;
    while(i <= n) {
        printf("%d ", i*2);
        i++;
    }
    return 0;
}
