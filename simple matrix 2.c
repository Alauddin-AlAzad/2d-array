#include<stdio.h>
int main()
{
    int A[5][6],B[5][6];
    int i,j;
    printf("Enter aliments for A matrix\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    for(i=0;i<5;i++)
    {
        printf("\t");
        for(j=0;j<6;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Enter aliments for B matrix\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("B= ");
    for(i=0;i<5;i++)
    {
        printf("\t");
        for(j=0;j<6;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


}
