
#include<stdio.h>
int main()
{
    int a[3][3];
    //input array eliments
    printf("Enter The eliments of arry a \n");
      for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    int b[3][4];
        for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            b[i][j] = a[i][j];

        }
    }
     //input b array
     printf("Enter eliments for you add \n");
    for(int i=0; i<3; i++)
    {
        for(int j = 3; j<4; j++)
        {
            printf("b[%d][%d] = ",i,j);
             scanf("%d", &b[i][j]);

        }
    }
     printf("Result= ");

     for(int i=0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    return 0;
}
