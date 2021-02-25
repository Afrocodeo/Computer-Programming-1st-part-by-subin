#include<stdio.h>
int main()
{
    //uppercase to lower
    char country[]={'B','A','N','G','L','a','d','e','s','h','\0'};
    int i,length;
    printf("%s\n",country);
    length=10;
    for(i=0;i<length;i++)
    {
        if(country[i]>=65&&country[i]<=90)
        {
            country[i]='a'+(country[i]-'A');
        }
    }
    printf("%s\n",country);
    return 0;
}
