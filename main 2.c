#include<stdio.h>
int main(){
int n,i,m=0,flag=0;
 printf("enter the number to check prime:");
 scanf("i=2;<=m;i++");
 m=n/2;
 for(i=2; i<m; i++)
 {
     if(n%i==0)
     {
  printf("number is not prime");
  flag=1;
  break;
     }
     }
if(flag==0)
printf("number is prime");
return 0;
}



    