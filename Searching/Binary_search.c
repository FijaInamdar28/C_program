#include<stdio.h>

void selection_sort(int arr[],int n)
{
    int i;
    int j;
    int temp;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int binary_search(int arr[],int n,int search)
{
    int first=0;
    int last=n-1;
    int mid;

    while(first<=last)
    {
        mid=(first+last)/2;

        if(search==arr[mid])
        {
            return mid;
        }
        else if(search<arr[mid])
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
    return -1;
}
void main()
{
    int arr[10];
    int n;
    int search;
    int i;
    int index;


    printf("Please Enter How Many Element You Want:\n");
    scanf("%d",&n);

    printf("Please Enter The Array Of Element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter The Search Element:\n");
    scanf("%d",&search);

    selection_sort(arr,n);

    printf("Sorted Array Is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    index=binary_search(arr,n,search);


    if(index==-1)
    {
        printf("\nNumber Not Found\n");
    }
    else
    {
        printf("\nNumber Found At Index=%d\n",index);
    }
}