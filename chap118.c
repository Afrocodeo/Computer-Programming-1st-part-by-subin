#include<stdio.h>
int main()
{
    int row,col,sumrow,sumcol;
    int arrays[5][5]={{6,4,7,8,9},
                      {3,7,1,9,9},
                      {8,6,4,2,7},
                      {2,4,2,5,9},
                      {4,1,6,7,3}};
    for(row=0;row<5;row++)
    {
        sumrow=0;

        for(col=0;col<5;col++)
        {
            sumrow=sumrow+arrays[row][col];

        }
        printf(" row %d sum: %d\n",row,sumrow);

    }
    for(row=0;row<5;row++)
    {

        sumcol=0;
        for(col=0;col<5;col++)
        {

            sumcol=sumcol+arrays[col][row];
        }

        printf(" column %d sum: %d\n",col,sumcol);
    }

    return 0;
}

