#include<stdio.h> 
#include<string.h>

  struct student{
     char name[30];
     int rollno;
     float marks; 
     char grade;
};

int main()

{
 int n,i;
 
  printf("enter number of student:");
  scanf("%d",&n);
  
  
  struct student S[n]; 
  
  for(i=0;i<n;i++)
  {
  
  
  printf("enter details of student\n %d",i+1);
 
   printf("\nenter name of student: ");
   scanf(" %[^\n]",S[i].name);
  
 
 
   printf("\nenter Rollno of student:");   
   scanf("%d",&S[i].rollno);
  
   printf("enter marks of student:\n");
   scanf("%2f",&S[i].marks);
  
   
  printf("\nenter grade of student: ");
  scanf(" %c",&S[i].grade);
  
  
  }
  
  printf("\n ===== student ===== \n:");  
  
  
  for(i=0;i<n;i++)
  {
  
  printf("enter details of student\n %d",i+1);
 
   printf("enter name of student:");
  
  printf("enter Rollno of student:"); 
  
  printf("enter marks of student:");
 
  printf("enter grade of student:");
  
  }
  
    return 0; 
  
  
  
  
  
  
  
  
  
}




