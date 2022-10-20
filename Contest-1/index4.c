#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    char ch1,ch2;
    char ch3='%';
    
    scanf("%d%c%d%c",&a,&ch1,&b,&ch2);
    printf("%d%c",(a*b),ch3);
    
    return 0;
}