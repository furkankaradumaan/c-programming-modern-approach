// Reads information about a product and displays it aligned with tabs
#include <stdio.h>

int main() {
        int item_number = 0;
        float unit_price = 0.0f;
        int day = 0, month = 0, year = 0;

        printf("Enter item number: ");
        scanf("%d", &item_number);
        printf("Enter unit price: ");
        scanf("%f", &unit_price);
        printf("Enter purchase date (mm/dd/yyyy): ");
        scanf("%d /%d  /%d", &month, &day, &year);

        printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n");
        printf("%4d\t$%7.2f\t%02d/%02d/%04d\n",
                item_number, unit_price, month, day, year);

        return 0;
}
