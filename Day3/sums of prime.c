#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    bool flag = false;
    for (int i = 2; i <= num/2; i++) {
        if (isPrime(i)) {
            if (isPrime(num - i)) {
                printf("%d = %d + %d\n", num, i, num-i);
                flag = true;
            }
        }
    }

    if (!flag) {
        printf("%d cannot be expressed as the sum of two prime numbers\n", num);
    }

    return 0;
}
