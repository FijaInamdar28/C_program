#include<stdio.h>

void display_sort(int arr[],int n)
{
    int i;
    printf("[");
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]");
}
void bubble_sort(int arr[],int n)
{
    int i;
    int itr;
    int temp,swap_check;
    for(itr=1;itr<n;itr++)
    {
        swap_check=0;
        for(i=0;i<n-itr;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap_check=1;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        if(swap_check==0)
        {
            break;
        }
    }
}

void main()
{
    int arr[10];
    int n;
    int i;

    printf("Please enter how many element you want:\n");
    scanf("%d",&n);

    printf("Please enter the element of array:\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    printf("Unsorted list:\n");
    display_sort(arr,n);

    bubble_sort(arr, n);

    printf("\nSorted list:\n");
    display_sort(arr,n);


}