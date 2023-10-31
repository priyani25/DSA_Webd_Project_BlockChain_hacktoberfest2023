#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Fibonacci sequence is not defined for negative values of n." << std::endl;
    } else {
        int result = fibonacci(n);
        std::cout << "Fibonacci number at position " << n << " is: " << result << std::endl;
    }

    return 0;
}
