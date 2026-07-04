// Calculates a broker's commision

#include <stdio.h>

int main() {
        int number_of_shares = 0;
        float price_per_share = 0;
        float commision = 0.0f, rival_commision = 0.0f;
        float amount = 0.0f;

        printf("Enter the number of shares: ");
        scanf("%d", &number_of_shares);
        printf("Enter price per share: ");
        scanf("%f", &price_per_share);

        amount = number_of_shares * price_per_share;
        
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
        
        // calculate rival broker's commision
        if (number_of_shares < 2000) {
                rival_commision = 33.0f + 0.03 * number_of_shares;
        } else {
                rival_commision = 33.0f + 0.02 * number_of_shares;
        }

        printf("Broker's commision: %.2f\n"
               "Rival broker's commision: %.2f\n",
               commision, rival_commision);

        return 0;
}
