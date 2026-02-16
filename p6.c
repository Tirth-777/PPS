#include<stdio.h>
int main()
{
   float per,total;
   int maths,science,hindi,gujrati,ss;
      printf("\nmaths=");
      scanf("%d",&maths );
      printf("\nscience=");
      scanf("%d",&science);
      printf("\nhindi=");
      scanf("%d",&hindi);
      printf("\ngujrati=");
      scanf("%d",&gujrati);
      printf("\nss=");
      scanf("%d",&ss);

total=maths+science+hindi+gujrati+ss;
per= total/500*100;
printf("\n obtain mask=%f",total);
   if(per>=90)
{
   printf("grade=a");
}
    else if (per>=75)
{
   printf("grade=b");
}
else if (per>=60)
{
   printf("grade=c");
}
else if (per>=40)
{
   printf("grade=d");
}
 else (per<=40)
{
   printf("fail");
}






}




