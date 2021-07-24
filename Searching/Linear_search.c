#include<stdio.h>

void main()
{
    int a[10];
    int n;
    int search;
    int i;
    int flag=0;

    printf("Enter the number:\n");
    scanf("%d",&n);

    printf("Please enter the arr element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Please enter the search element\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==a[i])
        {
            flag=1;
            printf("Number found at index=%d",i);
            break;
        }
    }

    if(flag==0)
    {
        printf("Number not found\n");
    }
}
