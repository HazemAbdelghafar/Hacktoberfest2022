#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j;
    printf("Enter the number of rows:\n");
    scanf("%d",&r);
    printf("Enter the number of columns:\n");
    scanf("%d",&c);
    int arr1[r][c],arr2[r][c],sum[r][c];
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("Enter the number for the row %d and column %d at the first array:\n",j,i);
            scanf("%d",&arr1[j][i]);
            printf("Enter the number for the row %d and column %d at the second array:\n",j,i);
            scanf("%d",&arr2[j][i]);
        }
    }
    printf("The sum of these two arrays is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            sum[j][i]=arr1[j][i] + arr2[j][i];
            printf("%d \t",sum[j][i]);
        }
        printf("\n");
    }
    return 0;
}
