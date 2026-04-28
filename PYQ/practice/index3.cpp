#include<iostream>
using namespace std;

int main() {
    int n, m, p, k, j;
    cin >> n>>m>>p>>k>>j;

    int banana_eat = m/k;
    int rem_banana = m%k;
    
    int peanut_eat = p/j;
    int rem_peanuts = p%j;
    
    int left_monkey = n - (rem_banana + rem_peanuts);
    
    if(rem_banana != 0 || rem_peanuts != 0) {
        left_monkey = left_monkey - 1;
    }
    
    cout << left_monkey << endl;
    return 0;
}