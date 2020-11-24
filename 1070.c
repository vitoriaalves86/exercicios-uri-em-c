#include <stdio.h>

int main (){
    int x, i;
    scanf("%d", &x);
    if(x % 2 == 0)
        x = x + 1;
    else
        x=x;
        printf("%d\n", x);

        for(i=1; i<=5;i++){
            printf("%d\n", x+=2);
        }

return 0;
}
