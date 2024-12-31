#include <stdio.h>
int main()
{
    int i=1,j,m,n;

    for( ; ; ){
        if(i > 20){
            break;
        }
        j=1;
        for( ; ; ){
            printf("%d x %d = %d\n",i,j,i*j);
            if(j==10){
                printf("\n");
            }
            j++;
            if(j > 10){
                break;
            }

        }
        i++;
    }
    return 0;
}
