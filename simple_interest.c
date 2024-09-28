/*
Author:Solomon Gichane
Reg no:CT102/G/21749/24
*/
#include<stdio.h>
int main() {
float principal,rate,time,simple_interest;

printf("Enter the principal amount:");
scanf("%f" ,&principal);

printf("Enter the rate of interest:");
scanf("%f" ,&rate);

printf("Enter the time:");
scanf("%f" ,&time);

simple_interest = ((principal*rate*time)/100);

printf("simple_interest = %.2f\n, simple_inerest");

return 0;
}