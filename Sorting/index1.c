  #include<stdio.h>
  int main()
  {
    
    int arr[5]={5,15,4,8,66};
    int n=5;
    int sort_arra[5];
    int min;
    int min_indx;
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");


    for(int j=0;j<5;j++)
    {
        min=arr[0];
        min_indx=0;

    for(int i =0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            min_indx=i;
        }
    }
    sort_arra[j]=min;
    arr[min_indx]=99999;
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",sort_arra[i]);
    }
  }