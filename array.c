# include <stdio.h>
# include <stdlib.h>
int main()
{
    int i,j,sum,tsum,n;
    int a[20];
    printf("enter the array");
    scanf("%d",&n);
    printf("enter the sum");
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(sum==tsum)
            {
                printf("the sub string is [%d]\n",tsum);
                printf("indices range from %d to %d",i,j-1);
                tsum=tsum+a[j];
                exit(0);
            }
            else
            {
                tsum=tsum+a[j];
            }
        }
        tsum=0;
    }
}