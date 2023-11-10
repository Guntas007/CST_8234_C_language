#include <stdio.h>


int sumOfDivisors(int num) {
    int sum = 1; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        } 
    }
    return sum;
}

int main() {
    int num1, num2;

   
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    int sum1 = sumOfDivisors(num1);
    int sum2 = sumOfDivisors(num2);

    if (sum1 == num2 && sum2 == num1 && num1 != num2) {
        printf("%d and %d are amicable numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not amicable numbers.\n", num1, num2);
    }

    return 0;
}
