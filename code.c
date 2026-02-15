#include<stdio.h>
int main()

{
int a,b,c;
printf("enter num");
scanf("%d %d %d",&a,&b,&c);

if(a==b && a==c)
{
    printf("three num are equal %d\n");
}
 else if(a>b && a>c)
{
    printf("a is max  %d\n",a);
}
 else if(c>a && c>b)
{
    printf("c is max  %d\n",c);
}
else 
printf("b is max  %d\n",b);
}





