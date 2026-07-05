
// Calculates a broker's commision

#include <stdio.h>

int main() {
        float amount = 0.0f;
        float commision = 0.0f;
        
        do {
                printf("Enter value of trade: ");
                scanf("%f", &amount);
        
                if (amount > 0) {
                        if (amount < 2500.00f) {
                                commision = 30.0f + 0.017f * amount;
                        } else if (amount < 6250.00f) {
                                commision = 56.0f + 0.0066f * amount;
                        } else if (amount < 20000.00f) {
                                commision = 76.0f + 0.0034f * amount;
                        } else if (amount < 50000.00f) {
                                commision = 100.0f + 0.0022f * amount;
                        } else if (amount < 500000.00f) {
                                commision = 155.0f + 0.0011f * amount;
                        } else {
                                commision = 255.0f + 0.0009f * amount;
                        }
                        
                        printf("Broker's commision: $%.2f\n\n",
                               commision);
                }
        } while(amount > 0);

        return 0;
}
