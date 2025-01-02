#include <stdio.h>
int main()
{
    int a,b,n,m,t,x,gcd,lcm;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    n=a;

    printf("Enter the value of b: ");
    scanf("%d", &b);
    m=b;

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

    lcm = n * m / gcd;
    printf("LCM is %d\n", lcm);
    return 0;
}
