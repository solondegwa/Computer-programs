#include <stdio.h>

float Totalbill(int unitsconsumed, float chargesperunit) {
    return unitsconsumed * chargesperunit;
}

float Surcharge(float Totalbill) {
    return Totalbill * 0.15;
}

int main() {
    int customerID;
    int unitsconsumed;
    char customerName[100];
    float chargesperunit;
    float totalbill;
    float surcharge;

    // Enter customer details
    printf("\nEnter customerName:\n");
    scanf("%s", customerName);

    printf("\nEnter customerID:\n");
    scanf("%d", &customerID);

    printf("\nEnter unitsconsumed:\n");
    scanf("%d", &unitsconsumed);

    // Calculate charges per unit based on units consumed
    if (unitsconsumed <= 199) {
        chargesperunit = 1.20;
    } else if (unitsconsumed >= 200 && unitsconsumed <= 400) {
        chargesperunit = 1.50;
    } else if (unitsconsumed >= 400 && unitsconsumed <= 600) {
        chargesperunit = 1.80;
    } else {
        chargesperunit = 2.00;
    }

    totalbill = Totalbill(unitsconsumed, chargesperunit);

    if (totalbill > 400) {
        surcharge = Surcharge(totalbill);
        totalbill += surcharge;
    }

    if (totalbill < 100) {
        totalbill = 100;
    }

    // Display the output
    printf("\nCustomer ID: %d\n", customerID);
    printf("\nUnits Consumed: %d\n", unitsconsumed);
    printf("\nCustomer Name: %s\n", customerName);
    printf("\nCharges Per Unit: %.2f\n", chargesperunit);
    printf("\nTotal Bill: %.2f\n", totalbill);

    return 0;
}