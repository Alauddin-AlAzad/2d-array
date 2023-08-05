#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,numofRows,numofCols;
    printf("Enter the Rows and Cols : ");
    scanf("%d %d",&numofRows,&numofCols);
    printf("Enter the Eliments of A matrix\n");
    for(i=0;i<numofRows;i++)
    {
        for(j=0;j<numofCols;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    /////////
     printf("\n\nEnter the Eliments of B matrix\n");
    for(i=0;i<numofRows;i++)
    {
        for(j=0;j<numofCols;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //print A
    printf("A = ");
     for(i=0;i<numofRows;i++)
    {
        printf("\t");
        for(j=0;j<numofCols;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");

    }
    //printB
      printf("\n\nB = ");
     for(i=0;i<numofRows;i++)
    {
        printf("\t");
        for(j=0;j<numofCols;j++)
        {
            printf("%d ",B[i][j]);

        }
        printf("\n");

    }
    //adittion
     for(i=0;i<numofRows;i++)
    {
        for(j=0;j<numofCols;j++)
        {
          C[i][j]= A[i][j] - B[i][j];
        }

    }
    //print addition
    printf("\nA-B = ");
      for(i=0;i<numofRows;i++)
    {
        for(j=0;j<numofCols;j++)
        {
          printf("%d ",C[i][j]);

        }
         printf("\n");
         printf("\t");
        }



}
