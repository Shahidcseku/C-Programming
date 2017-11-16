#include<stdio.h >
#include<conio.h>

int main()
{
  suru:
    char ch;
    printf("Enter a character to test:\n");
    ch=getche();
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf(" is a vowel.\n");
            break;
        default:
            printf(" is a consonant.\n");
      }
 goto suru;

}
