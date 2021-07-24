#include<stdio.h>

void display_list(int arr[],int n)
{
    int i;
    printf("[");

    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]");
}


void Quick_sort(int arr[],int L,int H)
{
    int pivot,low,high,temp;

    pivot=arr[L];
    low=L+1;
    high=H;

    while(low<=high)
    {
        while(arr[low]<pivot)
        {
            low++;

        }
        while(arr[high]>pivot)
        {
            high--;

        }   

        if(low<=high)
        {
            temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            low++;
            high--;


        }
    }

    temp=arr[L];
    arr[L]=arr[high];
    arr[high]=temp;


    if(L<high)
    {
        Quick_sort(arr,L,high-1);
    }
    if(low<H)
    {
        Quick_sort(arr,high+1,H);
    }

}
void main()
{
    int arr[10];
    int i;
    int n;

    printf("Please enter how many elemwnts you want:\n");
    scanf("%d",&n);

    printf("Please enter element of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }   


    printf("Unsorted array is:\n");
    display_list(arr,n);

    Quick_sort(arr,0,n-1);

    printf("\nSorted Array is:\n");
    display_list(arr,n);


}