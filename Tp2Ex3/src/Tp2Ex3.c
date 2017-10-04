#include <stdio.h>
#include <stdlib.h>

int main()
{

 double x,a,b ;
 printf("taper a");
 scanf("%lf",&a);
  printf("taper b");
 scanf("%lf",&b);
 if (a!=0){
 x=(-b)/a;
 printf("le resultat est %lf",x);}
 else {printf("error");}
    return 0;
}
