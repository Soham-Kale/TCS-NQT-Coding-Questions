#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    // 0 1
    if(num < 2) return false;
    
    for(int i=2; i*i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
} 

int findNthPrime(int n) {
    int count = 0, num = 1;
    while(count < n) {
        num++;
        if(isPrime(num)) count++;
    }
    return num;
}

int main() {
    int n1,n2;
    cin >> n1 >> n2;
    
    int prime1 = findNthPrime(n1);
    int prime2 = findNthPrime(n2);
    int result = (prime1 * prime2) - 1;
    
    cout << result << " " << endl;
    return 0;
}