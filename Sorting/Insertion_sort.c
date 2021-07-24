#include<stdio.h>

void display_sort(int arr[],int n)
{
    int i;
    printf("[");

    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]\n");
}

void insertion_sort(int arr[],int n)
{
    int value;
    int i;
    int hole;


    for(i=1;i<n;i++)
    {
        value=arr[i];
        hole=i;
        while(hole > 0 && arr[hole-1] > value)
        {
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }
}

void main()
{
    int arr[10];
    int n;
    int i;

    printf("Please enter how element you want:\n");
    scanf("%d",&n);

    printf("Please enter elemenent of array:\n");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]);
    }

    printf("Unsorted array is:\n");
    display_sort(arr,n);
    
    insertion_sort(arr,n);

    printf("Sorted array:\n");
    display_sort(arr,n);
}