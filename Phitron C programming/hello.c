#include<stdio.h>
#include<string.h>
int main()
{
      char name[3][21];
        printf("Enter your name: ");
        for (int i=0; i<3;i++)
        {
            scanf("%s",name[i]);

        }
        for(int i=0;i<3;i++)
        {

            printf("%s\n",name[i]);
        }

    getch();
}
