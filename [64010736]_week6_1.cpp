#include<stdio.h>
int main()
{
int n,a,b,c;
printf("Number = ");
scanf("%d", &n);
for(a=1;a<=n;a++)
{
for(b=1;b<=n-a;b++)
printf("");
for(c=1;c<=a;c++)

printf("%d",c);
printf("\n");

}

return 0;
}
