#include<stdio.h>
int main()
{   // all about string
    char country[11] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    printf("%s\n",country);

    char country1[] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    char country2[] = "Bangladesh";
    char *country3 = "Bangladesh";

    char country4[] = {'B','a','n','g','l','a','d','e','s','h',' ','i','s',' ','m','y',' ','c','o','u','n','t','r','y'};
    printf("%s\n",country4);

    char country5[] = {'B','a','n','g','l','a','d','e','s','h','\0','i','s',' ','m','y',' ','c','o','u','n','t','r','y'};
    printf("%s\n",country5);

    return 0;
}
