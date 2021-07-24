#include<stdio.h>

void main()
{
    int n1=0;
    int n2=1,i,a,fibo;
    printf("Please Enter the element:\n");
    scanf("%d",&a);
    printf("%d\t%d\t",n1,n2);

    for(i=0;i<a;i++)
    {
        fibo = n1+n2;
        printf("%d\t",fibo);

        n1=n2;
        n2=fibo;


        


    }


}