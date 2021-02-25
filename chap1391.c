#include<stdio.h>
int main()
{
    int ara1[]= {3,1,5,2,4};

    int i, minimum,t,ind2,index_2,minimum_index;
    for(index_2=0; index_2<5; index_2++)
    {
        minimum=1000;
        for(i=index_2; i<5; i++)
        {
            if(ara1[i]<minimum)
            {
                minimum=ara1[i];
                minimum_index=i;

            }
        }
        t=ara1[index_2];

        ara1[index_2]=minimum;

        ara1[minimum_index]=t;


    }
    for(i=0; i<5; i++)
    {
        printf("%d\n",ara1[i]);
    }

    return 0;
}

