#include<stdio.h>
int main()
{
char n;
scanf("%s",&n);
if(n=='a'||n=='A'||n=='e'||n=='E'||n=='I'||n=='i'||n=='O'||n=='o'||n=='u'||n=='U')
{
printf("\nVOWEL");
}
else
{
printf("CONSTANT");
}
return 0;
}
