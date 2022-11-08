#include<stdio.h>
#include<string.h>
int main()
{
    char input[50];
    char temp;
    printf("Enter a sentence: ");
    fgets(input,sizeof(input),stdin);
    //int count[100],c=0;
    int len= strlen(input);
    for(int i=0;i<(len-1);i++)
    {
        for(int j=0;j<len-2;j++)
        {
            if(input[j]>input[j+1])
            {
                temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
   
    }
    for(int i=0;i<len-1;i++)
        {
            printf("%c",input[i]);
        }
    

}