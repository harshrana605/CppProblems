#include <iostream>

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;   
    int n = 0;    // for counting the number of digits 

    // Calculate the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate the sum of the digits raised to the power of n
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        int power = 1;
        
        // Manually compute digit^n
        for (int i = 0; i < n; i++) {
            power *= digit;
        }
        
        sum += power;
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    return sum == originalNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isArmstrong(num)) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
