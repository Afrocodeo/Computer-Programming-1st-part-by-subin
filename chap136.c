#include<stdio.h>
#include<string.h>
int main()
{
    char word[80];
    int i,j,len,com=0;
    scanf("%s",word);
    len=strlen(word);
    for(i=0,j=len-1;i<len;i++,j--)
    {
        if(word[i]!=word[j])
        {
            com=1;
        }
    }

    if(com==0)
    {
        printf("%s is a palindrome.\n",word);
    }
    else {

        printf("%s is not a palindrome.\n",word);
    }

    return 0;
}
