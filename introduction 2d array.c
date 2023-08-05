#include<stdio.h>
int main()
{
    int i,j;
    int a[3][4]={ { 10,12,14,14}, {18,19,72,92},{23,39,90,38} };
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
