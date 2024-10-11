// 2D-array
#include<stdio.h>
int main() {
	int i,j;
    int goals [2] [3] = {{5,2,3},{2,3,5}};
    for (i=0;i<2;i++) {
    for (j=0;j<3;j++) {
    printf("goals [%d] [%d] = %d\n",i,j,goals [i] [j]);
    }
    }
    
   return 0;
   }