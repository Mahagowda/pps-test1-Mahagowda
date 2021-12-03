#include<stdio.h>
int input()
{
  int a;
  printf("enter the number:");
  scanf("%d",&a);
  return a;
}
int find_sum(int a,int b)
{
  
  sum=a+b;
  
}
int output(int a,int c,int sum)
{
  printf("sum of %d+%d is %d\n",a,c,sum);
  return 0;
}
int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=find_sum(x,y);
  output(x,y,z);
}