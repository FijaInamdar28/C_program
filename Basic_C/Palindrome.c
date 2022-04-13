#include<stdio.h>

int main()
{
    int n,r,sum=0,temp;
    printf("Please Enter the Number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is Not Palindrome\n");

    }
        
    return 0;

    
}
