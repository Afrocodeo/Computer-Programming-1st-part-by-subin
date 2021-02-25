#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char binary[65];
    int decimal,i=0,n,sum,first,j=1,k;
    printf("Enter the decimal number: ");
    scanf("%d",&decimal);
    while(pow(2,i)<=decimal)
        {
            i++;

        }
        first=pow(2,i-1);
        binary[0]=1;
       for(n=i-2;n>=0;n--)
         {
           if((pow(2,n)+first)>decimal)
           {
               binary[j]=0;
               j++;

           }
           else
           {
               binary[j]=1;
               j++;
               first=pow(2,n)+first;
           }
          }

          for(k=0;k<j;k++)
          {
              printf("%d",binary[k]);
          }
    return 0;
}

