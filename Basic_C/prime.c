#include<stdio.h>

int main()
{
    int n,m=0,flag=0;
    printf("Please Enter the num:-\n");
    scanf("%d",&n);
    m=n/2;
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime\n");
            flag=1;
            break;

        }
    }
    if (flag==0)
        printf("Number is prime\n");
    //else
       // printf() //   
    return 0;


}