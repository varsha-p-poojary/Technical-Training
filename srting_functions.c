#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0,len;
    char s1[100], s2[100];
    printf("Enter a string: ");
    gets(s1);
    len =strlen(s1);
    /* for(i=0;s1[i]!='\0';i++)
    {
       if(s1[i]!=s1[len-i-1])
       {
        flag = 1;
        break;
       }
    } */
   strcpy(s2,s1);
   strrev(s1);

    if(strcmp(s1,s2)==0)
    printf("Palindrome");
    else
    printf("Not a palindrome");
    return 0;
}