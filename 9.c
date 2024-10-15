#include<stdio.h>
void main()
{
  float a,b,c,d,roots,root2;
  printf("enter a,b,c values of quadratic equation");
  scanf("%f%f%f", &a,&b,&c);
  d= b*b-4*a*c;
   if (d<0)
    { printf("root 1 is %f", (-b/2*a)+(sqrt(-d)/2*a));
      printf("root 2 is %f", (-b/2*a)-( sqrt(-d)/2*a));
    }
   else if ( d==0)
    {   printf(" root is %f", -(b/2*a)); }
   else
    { printf("root 1 is %f", (-b/2*a)+(sqrt(-d)/2*a));
      printf("root 2 is %f", (-b/2*a)-( sqrt(-d)/2*a));
    }
}   