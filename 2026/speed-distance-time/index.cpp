#include<bits/stdc++.h>
using namespace std;

int main() {
    double distance, time;
    cin >> distance >> time;
    
    double speed = (distance/time) * 3.6;
    
    cout << speed;
    return 0;
}