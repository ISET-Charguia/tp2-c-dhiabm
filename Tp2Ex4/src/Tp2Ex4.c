#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
printf("taper l'anne pls");
scanf("%d",&x);
if (((x%4==0)&&(x%100!=0))||(x%400==0)) {printf("l'anne est bissextile");}
else {printf("l'anne n'est pas bissextile");}

    return 0;
}

}
