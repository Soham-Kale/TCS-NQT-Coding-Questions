#include<bits/stdc++.h>
using namespace std;

int main() {
    int amount;
    cin >> amount;
    
    double discount = 0.0;

    if(amount < 1000) {
        discount = 0.05;
    } else if(1000 <= amount < 5000) {
        discount = 0.1;
    } else {
        discount = 0.15;
    }
    
    double finalAmt = amount - ( amount * discount);
    
    cout << "Final amount after discount: " << finalAmt;
    
    return 0;
}