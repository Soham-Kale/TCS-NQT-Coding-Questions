#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,p,k,j;
    cin >>n>>m>>p>>k>>j;
    
    // n = Total no of Monkeys
    // k = Number of eatable Bananas by Single Monkey
    // j = Number of eatable Peanuts by single Monkey 
    // m = Total number of Bananas
    // p = Total number of Peanuts
    
    int banana_eat = m/k;
    int rem_banana = m%k;
    
    int penauts_eat = p/j;
    int rem_penauts = p%j;
    
    int left_monkey = n - (banana_eat + penauts_eat);
    
    if(rem_banana != 0 || rem_penauts != 0) {
        left_monkey = left_monkey - 1;
    }
    
    cout << left_monkey << endl;
    return 0;
}