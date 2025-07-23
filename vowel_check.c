#include<stdio.h>
int main()
{
    char a;
    printf("Enter a letter: ");
    scanf("%c",&a);
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
    {
        printf("The given letter is a Vowel");
    }
    else 
    {
       printf("The given letter is not a Vowel");
    }
    return 0; 
}
