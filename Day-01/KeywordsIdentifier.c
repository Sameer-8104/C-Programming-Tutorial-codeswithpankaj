#include <stdio.h>

int main() {
    int age = 25;
    float salary = 5000.50;
    char initial = 'J';
    char firstName[20] = "John";
    
    printf("Personal Information:\n");
    printf("Name: %s\n", firstName);
    printf("Age: %d\n", age);
    printf("Initial: %c\n", initial);
    printf("Salary: %.2f\n", salary);
    
    return 0;
}
