#include <stdio.h>

int main(){
    //leap year calculation
    int year;
    scanf("%d",&year);
    
    if((year%4==0&&year%100!=0)||year%400==0) printf("leap year");
    else printf("leap year");
    
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    
    if (x>y&&x>z) printf("x is greater");
    else if (y>x&&y>z) printf("y is greater");
    else if (z>x&&z>y) printf("z is greater"); printf("all are eqaul");
    
    
    return 0;

}
