#include<stdio.h>
#include<string.h>
int isPalindrome(char word[]){
int flag=0;
for(int i=0;word[i]!='\0';i++)
{
    if(word[i]!=word[strlen(word)-1-i])
    {
       flag=1;
    }
}
if(flag==1)
{
    return 0;
}
else
    return 1;

}
int main(){
int n, i;
scanf("%d",&n);
char words[20][21];
for(i=0; i<n; i++) scanf("%s",& words[i]);
for(i=0; i<n; i++){
if(isPalindrome(words[i])){
if(strlen(words[i])<=7) printf("Case #3: %s\n", words[i]);
else {
int length = strlen(words[i]) ;
char firstLetter = words[i][0];
char lastLetter = words[i][length-1];
printf("Case #2: %c%d%c\n", firstLetter,length-2, lastLetter);
}
}
else printf("Case #1: Not Palindrome\n");
}
}
