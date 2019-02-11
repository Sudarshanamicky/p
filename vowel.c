#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u' || c=='A' || c=='E'|| c=='O' || c=='U' || c=='I')
{
printf("Vowel");
}
else
printf("Consonant");
return 0;
}
