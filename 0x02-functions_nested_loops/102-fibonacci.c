#include <stdio.h>
int f0=0; 
int f1=1; 
for(int i=1;i<=50;i++) 
{ 
  printf(“%d\n”, f1); 
  int f2=f1+f0; 
  f0=f1; 
  f1=f2; 
} 
