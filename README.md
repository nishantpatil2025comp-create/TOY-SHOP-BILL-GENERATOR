RESEARCH  : 

Small and medium toy shops often calculate bills manually — which is time-consuming and error-prone.

A computerized bill generator ensures:

Faster checkout process.

Fewer calculation mistakes.

Easier updates in prices or tax.



⚙ Technologies Used:

Programming Language: C

Concepts Covered:

Loops (while)

Conditional statements (switch / if)

Arithmetic operations for billing

Input/output handling with scanf() and printf()





ANALYSE :


System Inputs:

Toy code or number (1–6)

Quantity for each item

Option to continue shopping (Yes/No)


 System Process:

Match item code with price.

Multiply quantity × price.

Add each item’s total to overall total.

Optionally, apply discount or GST.


System Outputs:

List of purchased items (optional)

Final total amount

Thank you message / bill summary


IDEAT :


Possible Features:

1. Basic Version (Current)

Menu of toys

User input of choice & quantity

Total amount printed



2. Intermediate Version

Add GST (e.g., 5%)

Add discount (e.g., 10% for bills above ₹5000)

Display summary of all items purchased



3. Advanced Version (Future Idea)

Store data in a file (using file handling in C)

Generate printed bill receipt (text file)

Use arrays/structures for item details

Real-time price updates

BUILD:
  
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




TESTING:


=== MS TOY SHOP ===
1. Lego Set - 1200
2. Barbie Doll - 1300
3. Car/Bike - 988
4. Remote Car - 2000
5. Wooden Horse - 677
6. Football - 999

Enter Toy Code (1-6): 1
Enter Quantity: 3

--- BILL ---
Price (Without GST): Rs. 3600.00
GST (18%): Rs. 648.00
Final Amount (With GST): Rs. 4248.00




=== MS TOY SHOP ===
1. Lego Set - 1200
2. Barbie Doll - 1300
3. Car/Bike - 988
4. Remote Car - 2000
5. Wooden Horse - 677
6. Football - 999

Enter Toy Code (1-6): 8
Enter Quantity: 6
Invalid code!











IMPLEMENTATION:




This is a basic console-based implementation of a toy shop billing program written in Python. The program uses a dictionary to store toy inventory and a loop to handle the billing process. 
Program features
Menu display: Shows a list of available toys and their prices.
Billing loop: Prompts the user to select toys and quantities.
Inventory check: Prevents sales of items that are out of stock.
Total calculation: Calculates the final bill with tax.
Receipt generation: Prints a simple receipt for the customer.



CONCLUSION:
   The  toy shop billing program successfully automates and streamlines the sales process, replacing manual, error-prone tasks with a fast, efficient, and reliable digital solution. This system has several benefits:
Enhanced accuracy and efficiency: By automating calculations and data entry, the program significantly reduces the risk of human error, ensuring that each transaction is accurate.
Faster checkout: The system accelerates the billing process, especially during peak hours, which improves the overall customer experience and increases transaction speed.
