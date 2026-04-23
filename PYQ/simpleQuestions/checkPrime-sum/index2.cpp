#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfPrimes(int n) {
    int sum = 0;
    int count = 0;

    for (int num = 2; count < n; num++) {
        if (isPrime(num)) {
            sum += num;
            count++;
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    int result = sumOfPrimes(n);
    cout << result << endl;

    return 0;
}