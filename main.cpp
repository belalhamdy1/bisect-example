#include <iostream>
#include <vector>

#define COMMIT_NUMBER 371

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

std::vector<int> get_first_n_primes(int n) {
    std::vector<int> primes;
    int count = 0;
    for (int i = 2; count < n; i++) {
        if (is_prime(i)) {
            primes.push_back(n);
            count++;
        }
    }
    return primes;
}

int main() {
    int n;
	std::cout << "Commit Number: " << COMMIT_NUMBER << "\n";
    std::cout << "Enter the number of prime numbers you want to find: ";
    std::cin >> n;

    std::vector<int> primes = get_first_n_primes(n);

    std::cout << "The first " << n << " prime numbers are: ";
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}