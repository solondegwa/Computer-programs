/*
Author:Solomon Gichane
Reg no:CT102/G/21749/24
*/
#include<stdio.h>
int main() {
    float principal,rate,time,compound_interest;
    
    printf("Enter the principal amount:");
    scanf("%f" ,principal);
    
    printf("Enter the rate of interest:");
    scanf("%f" ,rate);
    
    printf("Enter the time in years:");
    scanf("%f" ,time);
    
    compound_interest = (principal*(1+rate/100),time);
    
    printf("compound_interest = %.2\n, compound_interest");
    return 0;
    }