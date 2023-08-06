#include <stdio.h>
int fibo(int n ){
    if(n<=0)  return 1;
    return fibo(n-1) + fibo(n-2 );
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int f = fibo(n);
    printf("%d\n", f);

return 0;
}
