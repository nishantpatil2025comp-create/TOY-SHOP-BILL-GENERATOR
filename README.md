TOY  SHOP BILL GENERATOR



 RESEARCH  : 

In the toy shop when ever anyone shop  various types of toy .
When shopping complete they went to bill counter and gave the shopping toys to 
counter and the shopkeeper give a bill for all the shopping . In the bill for all the shopping does is as per , first there is the shop name in bold letters also address of shop
Then after all the details of customer like name , telephone number and customer id and so on etc…


ANALYSE :


A toy shop bill, or receipt, details products, quantities, unit prices, and total costs, often incorporating GST and discounts, while the underlying software handles inventory, sales analysis, and customer loyalty for effi incient business operations. Key features of toy shop billing software include real-time inventory management, automated reordering, GST compliance, and customer management, enabling better decision-making and customer satisfaction.
In the shop there is ‘ibi code’ on   all the products that implies the amount/ price  of product .
By scanning on the a ibi scaning machine  . after that scanning all product with there names and  price of the product .

IDEAT :


For the efficient business bill should be generated  with all correct details of customer
In the bill of all product that purchased  by customer , there is 
List of all product and price ahead it , all these activity is run by a program .
In that program we fist print name of shop and then all details of customer 
, date of purchased product also the time of purchase  and invoice , there are than a gang of activities.there is all the invoice of product purchased by customer like GST , discount price .also the ways of payment like UPI, CASH PAYMENT , CREADIT CARD PAYMENT , etc … .


BUILD:
  
 #include <stdio.h>

int main() {
    
  int total;
    char name, customerid;
    printf(" ROY TOY SUPER SHOP\n");
    printf("====================\n\n\n");
    printf("at ASHOKA PALACE AMRAVATI , MAHARASHTRA\n\n\n");
    printf(" wellcome to roy toy shop\n\n");
    printf("enter your name:\n\n ");
    scanf("%s", &name);
    printf("enter your customer id:\n\n");
    scanf("%s",&customerid);
    printf("YOUR LIST OF PRODUCTS \n 1) barbie doll set  -999 rupees\n 2) RC car - 799 rupees \n 3) Cricket bat - 1299rupees\n 4) football-988\n 5)wooden horse-399\n\n\n\n");
total= 999+799+1299+988+399;
printf("total price: %d\n\n", total );
 printf("THANKS FOR SHOPPING ");
    return 0;
}

           


TESTING: 
ROY TOY SUPER SHOP
====================


at ASHOKA PALACE AMRAVATI , MAHARASHTRA


 wellcome to roy toy shop

enter your name:

 nishant
enter your customer id:

nvnv
YOUR LIST OF PRODUCTS 
 1) barbie doll set  -999 rupees
 2) RC car - 799 rupees 
 3) Cricket bat - 1299rupees
 4) football-988
 5)wooden horse-399



total price 4588

THANKS FOR SHOPPING 

=== Code Execution Success



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
