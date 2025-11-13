#include <stdio.h>

float calbonus(float salary) {
    if (salary < 30000)
        return salary * 0.20;
    else
        return salary * 0.10; 
}

int main() {
    float salary[5];
    float bonus[5];
    float total = 0.0;

    printf("Enter salaries of 5 employees\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d Salary ", i + 1);
        scanf("%f", &salary[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        bonus[i] = calbonus(salary[i]);
        printf("Employee %d Bonus: %.2f\n", i + 1, bonus[i]);
        total += salary[i] + bonus[i];
    }

    printf("Total Payout: %.2f\n", total);

    return 0;
}

