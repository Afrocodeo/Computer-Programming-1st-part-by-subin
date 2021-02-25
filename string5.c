#include<stdio.h>
int string_length(char str[])
{
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}
int main()
{

    char country[100];
    int length;
    while(1 == scanf("%s",country))
    {
        length = string_length(country);
        printf("length: %d\n", length);
    }

    return 0;
}

