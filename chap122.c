#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int binary[65],ok[65];
    int decimal,i=0,j,k;
    printf("Enter the decimal number: ");
    scanf("%d",&decimal);
    while(decimal!=0)
    {   if(decimal%2!=0)
        {

           decimal=decimal/2;
           ok[i]=1;
           i++;

        }
        if(decimal%2==0)
        {
           decimal=decimal/2;
           ok[i]=0;
           i++;

        }

    }
   // k=i-1;
     for(j=0,k=i-1;j<=i-1;j++,k--)
    {
        binary[k]=ok[j];


    }
    for(j=1;j<i;j++)
    {
       printf("%d\n",binary[j]);
    }

    return 0;
}


