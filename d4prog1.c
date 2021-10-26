# include <stdio.h>
void main()
{
    int n=0;
    printf("Enter th elength of the string\n");
    scanf("%d",&n);
    int nx=n+5;
    char arr[nx];
    printf("Enter the string\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%c",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=65 && arr[i]<=91)
        {
            printf("%c",arr[i]);
        }
    }
}