#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 10

// Structure definition
struct Employee {
    int empNo;
    char name[50];
    float paygrade;
    char designation[50];
};

// Function declarations
void inputEmployeeDetails(struct Employee emp[], int *count);
void displayEmployeeDetails(struct Employee emp[], int count);
void calculateTax(float paygrade);
void searchEmployee(struct Employee emp[], int count);

int main() {
    struct Employee emp[MAX_EMPLOYEES];
    int count = 0, choice;

    while (1) {
        printf("\n1. Input Employee Details\n");
        printf("2. Display All Employee Details\n");
        printf("3. Search Employee by EmpNo\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            inputEmployeeDetails(emp, &count);
        else if (choice == 2)
            displayEmployeeDetails(emp, count);
        else if (choice == 3)
            searchEmployee(emp, count);
        else if (choice == 4)
            break;
        else
            printf("Invalid choice! Try again.\n");
    }

    return 0;
}

// Function definitions

void inputEmployeeDetails(struct Employee emp[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("Employee list is full!\n");
        return;
    }

    printf("Enter Employee Number: ");
    scanf("%d", &emp[*count].empNo);

    printf("Enter Name: ");
    scanf("%s", emp[*count].name);

    printf("Enter Paygrade: ");
    scanf("%f", &emp[*count].paygrade);

    printf("Enter Designation: ");
    scanf("%s", emp[*count].designation);

    (*count)++;
}

void displayEmployeeDetails(struct Employee emp[], int count) {
    if (count == 0) {
        printf("No employee details to display!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nEmployee No: %d\n", emp[i].empNo);
        printf("Name: %s\n", emp[i].name);
        printf("Paygrade: %.2f\n", emp[i].paygrade);
        printf("Designation: %s\n", emp[i].designation);

        calculateTax(emp[i].paygrade);
    }
}

void calculateTax(float paygrade) {
    float tax = 0.0;

    if (paygrade <= 25000)
        tax = 0;
    else if (paygrade <= 50000)
        tax = 0.05 * paygrade;
    else if (paygrade <= 100000)
        tax = 0.10 * paygrade;
    else if (paygrade <= 150000)
        tax = 0.15 * paygrade;
    else
        tax = 0.30 * paygrade;

    printf("Tax to be paid: %.2f\n", tax);
}

void searchEmployee(struct Employee emp[], int count) {
    int empNo;
    printf("Enter Employee Number to search: ");
    scanf("%d", &empNo);

    for (int i = 0; i < count; i++) {
        if (emp[i].empNo == empNo) {
            printf("\nEmployee No: %d\n", emp[i].empNo);
            printf("Name: %s\n", emp[i].name);
            printf("Paygrade: %.2f\n", emp[i].paygrade);
            printf("Designation: %s\n", emp[i].designation);

            calculateTax(emp[i].paygrade);
            return;
        }
    }

    printf("Employee not found!\n");
}
