#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile=fopen("input.txt","r");
    FILE *outputFile;
    outputFile=fopen("output.txt","w");
    int n;
    for(int i=0;i<5;i++)
    {
        fscanf(inputFile,"%d",&n);
        fprintf(outputFile,"%d ",n);
    }
    fclose(inputFile);
    fclose(outputFile);
}