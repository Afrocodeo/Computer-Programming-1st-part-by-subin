#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0; i<=6; i++)
    {
        for(j=1; j<=i; j++)

        {
            printf(" ");
            //printf("hi");
            //printf("%d%d",i,j);

            if(i>=7)
            {
                break;
            }
        }

        for(k=7-i; k>0; k--)
        {
            printf("c");

        }
        if(i<7)
        {printf("\n");}

    }

    for(i=2; i<8; i++)
    {
        for(j=7-i; j>0; j--)

        {
            printf(" ");

        }
        for(k=0; k<i; k++)
        {
            printf("c");

        }

        printf("\n");
    }

    return 0;
}

