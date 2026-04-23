#include<iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;

    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    int sum = 0;

    for(int i = n; i <= m; i++) {
        if(isPrime(i)) {
            sum += i;
        }
    }

    cout << sum;
    return 0;
}