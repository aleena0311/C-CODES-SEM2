//pattern problem:
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the limit: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);

     for(j=1;j<=n;j++)
        {
            printf("%d",j);
        }
         printf("\n");
    }
   
}
