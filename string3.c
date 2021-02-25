#include<stdio.h>
int string_length(char str[])
{
    int i,length=0;
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}
int main()
{
    int n1,n2;
    int value=scanf("%d %d",&n1,&n2);
    printf("%d",value);
    char country[100];
    int length;
    while(1 == scanf("%s",country))
    {
        length = string_length(country);
        printf("length: %d\n", length);
    }

    return 0;
}
