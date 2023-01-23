#include<stdio.h>
int main()
{
    FILE *logFile;
    FILE *inputFile;
    logFile=fopen("logfile.txt","a");
    inputFile=fopen("Hello.txt","r");
    if(inputFile==NULL)
    {
        fprintf(logFile,"File not oper ar 8:00pm\n");
    }
    fclose(inputFile);
    fclose(logFile);
    return 0;
}