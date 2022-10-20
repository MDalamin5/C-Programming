#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c && b==c && b==a && c==b && c==a&&a>0&&b>0 && c>0)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}