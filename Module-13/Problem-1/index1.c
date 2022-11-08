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
    for(int i=0;i<(len-1)/2;i++)
    {
        for(int j=0;j<len-1;j++)
        {
            if(input[i]<input[j])
            {
                temp=input[i];
                input[i]=input[len-1-j];
                input[len-1-j]=temp;


            }
        }

        for(int i=0;i<len-1;i++)
        {
            printf("%c",input[i]);
        }
        
    }
    

}