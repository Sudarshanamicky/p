#include <stdio.h>
int main()
{
   int a,b,c,g;
   scanf("%d%d%d",&a,&b,&c);
   g=a>b?(a>c?a:c):(b>c?b:c);
   printf("%d",g);
return 0;
}
