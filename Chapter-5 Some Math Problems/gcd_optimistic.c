#include <stdio.h>
int main()
{
    int a,b,t,x,gcd;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    if(a==0){
        gcd=b;
    }
    else if(b==0){
        gcd=a;
    }else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }

    printf("GCD is %d\n", gcd);
    return 0;
}
