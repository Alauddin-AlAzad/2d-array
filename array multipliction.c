#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10];
    int r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter the rows and colums number for First array : ");
    scanf("%d%d",&r1,&c1);

    printf("\nEnter the rows and colums number for First array : ");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {

        printf("Error !! colums of first Array not equal to rows of second array\n");
         printf("Enter the rows and colums number for First array : ");
        scanf("%d%d",&r1,&c1);

        printf("\nEnter the rows and colums number for First array : ");
       scanf("%d%d",&r2,&c2);
    }
    //First array input
    printf("Enter the eliments of first array :  \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }
    //second array input
    printf("Enter the eliments of second array :  \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }
    //result
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
               sum= sum+first[i][k] * second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    //print first array
    printf("First = ");
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c1;j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
         printf("\t");
    }
      //print second array
    printf("\n\nsecnd = ");
    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
         printf("\t");
    }
    //print result
     printf("\n\nResult = ");
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
         printf("\t");
    }

}
