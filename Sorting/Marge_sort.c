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
void marge(int arr[],int low,int mid,int high)
{
    int i,j,k,brr[10];

    i=low;
    j=mid+1;
    k=0;
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            brr[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            brr[k]=arr[j];
            j++;
            k++;

        }
    }
        while(i<=mid)
        {
            brr[k]=arr[i];
            i++;
            k++;

        }
        while(j<=high)
        {
            brr[k]=arr[j];
            j++;
            k++;
        }
        k=0;
        for(i=low;i<=high;i++)
        {
            arr[i]=brr[k];
            k++;

        }
        
    }




void marge_sort(int arr[],int low,int high)
{
    int mid;
    if(low < high)
    {
        mid=(low+high)/2;
        marge_sort(arr,low,mid);
        marge_sort(arr,mid+1,high);
        marge(arr,low,mid,high);


    }

}
void main()
{
    int arr[10],i,n;

    printf("Please enter how many element you want:\n");
    scanf("%d",&n);

    printf("Plrase enter elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Unsorted array is:\n");
    display_list(arr,n);

    marge_sort(arr,0,n-1);

    printf("\nSorted array is:\n");
    display_list(arr,n);
}