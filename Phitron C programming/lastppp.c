#include<stdio.h>
int Max(int arr[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  int even_max=  Max(arr,n);


  for(int i=0;i<n-1;i++)
  {
      for(int j=i;j<n;j++)
      {
          int sum=(arr[i]+arr[j+1]);
          if(sum%2==0)
          {
              if(sum>even_max)
              {
                  even_max=sum;
              }
          }
      }
  }

printf("%d",even_max);
}


int Max(int arr[],int n){
int max=arr[0];
for(int i=0;i<n;i++)
   {

        if(arr[i]%2==0)
        {
            if(arr[i]>max)
            {
                 max=arr[i];
             }
        }


   }
   return max;
}

