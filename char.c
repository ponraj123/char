#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
{
printf("The char is alphabet:");
}
else
{
printf("The char is not alphabet:");
}
}
