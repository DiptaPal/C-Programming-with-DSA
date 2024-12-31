#include <stdio.h>
int main()
{
    int n = 5, i = 1;
    for( ; ; ){
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
        if(i > 10){
            break;
        }
    }
    return 0;
}
