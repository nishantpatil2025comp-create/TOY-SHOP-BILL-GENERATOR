#include <stdio.h>

int main() {
    int code, qty;
    float price = 0, total, gst, final_amount;

    printf("=== MS TOY SHOP ===\n");
    printf("1. Lego Set - 1200\n");
    printf("2. Barbie Doll - 1300\n");
    printf("3. Car/Bike - 988\n");
    printf("4. Remote Car - 2000\n");
    printf("5. Wooden Horse - 677\n");
    printf("6. Football - 999\n");

    printf("\nEnter Toy Code (1-6): ");
    scanf("%d", &code);

    printf("Enter Quantity: ");
    scanf("%d", &qty);

    if (code == 1) price = 1200;
    else if (code == 2) price = 1300;
    else if (code == 3) price = 988;
    else if (code == 4) price = 2000;
    else if (code == 5) price = 677;
    else if (code == 6) price = 999;
    else {
        printf("Invalid code!\n");
        return 0;
    }

    total = price * qty;
    gst = total * 0.18;             
    final_amount = total + gst;

    printf("\n--- BILL ---\n");
    printf("Price (Without GST): Rs. %.2f\n", total);
    printf("GST (18%%): Rs. %.2f\n", gst);
    printf("Final Amount (With GST): Rs. %.2f\n", final_amount);

    return 0;
}
