#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile=fopen("input.txt","r");
    outputFile=fopen("output.txt","w");
    if(inputFile==NULL)
    {
        printf("Invalid input file");
    }
    int n;
    fscanf(inputFile,"%d",&n);
    for(int i=1;i<=n;i++)
    {
        fprintf(outputFile,"%d ",i);
    }
}