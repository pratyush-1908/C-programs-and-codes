#include <stdio.h>
int main() {
float d,i,tr;
 printf("enter the amount in USD");
 scanf("%f",&d);
 printf("enter the conversion rate");
 scanf("%f",&tr);
 i=d*tr;
 printf("the amount in INR is %f",i);
 return 0;
}