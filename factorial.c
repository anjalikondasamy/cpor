#include<stdio.h>
#include<conio.h>
int main(void)
{
int n,i,f=1;
clrscr();

scanf("%d",&n);
for(i=1;i<=n;i++)
{
	f=f*i;
}
printf("%d\n",f);
	return 0;
}
