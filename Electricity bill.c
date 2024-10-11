#include<stdio.h>
int main(){
	int customerID;
	int unitsconsumed;
    char customerName[100];
	float chargesperunit;
	float totalbill;
	float surcharge;


	//Enter customer details
	printf("\nEnter customerName\n:");
	scanf("%s",&customerName);


	printf("\nEnter customerID\n:");
	scanf("%d", &customerID);

	printf("\nEnter unitsconsumed\n:");
	scanf("%d", &unitsconsumed);



	// caculate charges per units based on units consumed
	if(unitsconsumed<=199){
		chargesperunit=1.20;
	}else if(unitsconsumed>=200 && unitsconsumed<=400) {
		chargesperunit=1.50;
	}else if(unitsconsumed>=400 && unitsconsumed<=600) {
		chargesperunit=1.80;
	}else{
		chargesperunit=2.00;
	}
		totalbill = unitsconsumed*chargesperunit;

		if(totalbill>400){
			surcharge=0.15;
			totalbill+=surcharge;
		}

		if(totalbill<100){
			totalbill=100;
		}
		// display the output

		printf("\ncustomers iD: %d\n",customerID);
		printf("\nunitsconsumed: %d\n",unitsconsumed);
		printf("\ncustomerName: %s\n",customerName);
		printf("\nchargesperunit: %.1f\n",chargesperunit);
		printf("\ntotalbill: %.1f\n",totalbill);

   return 0;
   }