#include <stdio.h>
#include <string.h>

struct customer {
    int account_no;
    char name[50];
    float balance;
};

void print_low_balance_customers(struct customer customers[], int n) {
    printf("Customers with balance less than 100 Rs:\n");
    for (int i = 0; i < n; i++) {
        if (customers[i].balance < 100) {
            printf("Account No.: %d, Name: %s\n", customers[i].account_no, customers[i].name);
        }
    }
}

int main() {
    // Assume 3 customers in the bank
    struct customer customers[3];

    // Accept customer details
    for (int i = 0; i < 3; i++) {
        printf("Enter Account No. for customer %d: ", i+1);
        scanf("%d", &customers[i].account_no);
        printf("Enter Name for customer %d: ", i+1);
        scanf("%s", customers[i].name);
        printf("Enter Balance for customer %d: ", i+1);
        scanf("%f", &customers[i].balance);
    }

    // Print customers with low balance
    print_low_balance_customers(customers, 3);

    return 0;
}
