#include <stdio.h>



int main(void)

{

    long int n;

    int count=0;

    scanf("%ld",&n);

    while(n !=0)

    {

        n=n/10;

        count++;

    }

    printf("%d\n",count);

return 0;

}