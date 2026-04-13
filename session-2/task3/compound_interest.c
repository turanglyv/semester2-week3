#include <stdio.h>
#include <math.h>

int main(void) {

    float deposit = 120.0;
    float rate = 0.05;
    int term = 5;
    float final_amount;
    float gain;

    final_amount = deposit * pow((1 + rate), term);

    gain = final_amount - deposit;

    printf("Final amount: %f\n", final_amount);
    printf("Gain: %f\n", gain);

    return 0;
}