#include<stdio.h>
int main()
 {
  int a,b,c ,sum,choice,n;
   
   do{
   
   
   
   
   printf("menu\n");
    printf("1>check the num is even or odd\n");
    printf("2>check the num is positive or nagetive\n");
    printf("3>check gratest num among three\n"); 
    printf("4>find the same of digits\n");
    printf("5> exit\n");
    printf ("choice 1to5      \n");
     scanf("%d",&choice);
 
 switch(choice)
 {
   case 1:{
     printf("ent num \n");
     scanf("%d",&a);
   if (a%2==0)
   printf(" num is even %d \n",a);
   else
    printf("num is odd %d  \n",a);
      break;
    }
      case 2:{
 
     printf("ent num \n");
     scanf("%d",&a);
if (a>=0) 
      printf("a is positive  \n");
      
else
       printf("a is negative  \n");
     
break;
} 
    case 3:{
   printf("ent num \n");
     scanf("%d",&a);
 
  printf("ent num \n");
     scanf("%d",&b);
 
  printf("ent num \n");
     scanf("%d",&c);
 
  if(a>=c && a>=b)
  printf("a is biggest %d \n",a);


  else if (c>=a && c>=b)
  printf(" c is biggest %d \n",c);

  else 
  printf ("b is biggest %d \n",b);
  break;
  }

case 4 :{
     printf("ent num \n");
     scanf("%d",&a);
     sum=0;
   
   while (a>0)
  a= a%10;
  sum+=a;
  n =n/10;
}
    printf(" sum of digits %d , sum \n");
     break;
    
    
    
    }
    }while (choice != 5);
    
    
    
    
    
    
