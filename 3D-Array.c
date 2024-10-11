// 3D-array
#include<stdio.h>
int main() {
	int i,j,k;
    int grades [2] [2] [3] = {{{4,2,2},{8,3,6}},{{8,0,2},{9,3,3}}};
    for (i=0;i<2;i++) {
    for (j=0;j<2;j++) {
    for (k=0;k<3;k++) {
    printf("grades [%d] [%d] [%d] = %d\n", i,j,k,grades[i] [j] [k]);
    }
    }
    }
   return 0;
   }