// problem 2
#include <stdio.h>

int main(){
    
    int tamil,english,maths,science,social,sum;
    float avg;
    
    scanf("%d%d%d%d%d",&tamil,&english,&maths,&science,&social);
    
    sum=tamil+english+maths+science+social;
    avg=sum/5.0;
    
    printf("Total:%d \n",sum);
    printf("average:%.2f \n",avg);
    
    if(avg>=90) printf("grade=o");
    else if(avg>=80) printf("grade= A");
    else if(avg>=70) printf("grade= B");
    else if(avg>=60) printf("grade= C");
    else if(avg>=40) printf("grade= D");
    else printf("better luck next time");
    
    return 0;

}