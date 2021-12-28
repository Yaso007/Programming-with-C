//fibonacci using while loop

#include <stdio.h>

void main()
{
  int a,b,c,n;
  
  a = 0;
  b = 1;
  
  printf(" enter the number of sequence:\n");
  scanf("%d",&n);
  
  printf("%d\t%d\t",a,b);
  
  while(n-2>0){
      c = a+b;
      printf("%d\t",c);
      a=b,b=c;
      n--;
  }
}
