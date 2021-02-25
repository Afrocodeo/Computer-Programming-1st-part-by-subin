#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=7-i;j>0;j--)
        {
            printf("c");

        }
     if(i==7)
     {
         break;
     }
        printf("\n");
    }
    for(i=2;i<8;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("c");
        }
        printf("\n");
    }
    return 0;
}
