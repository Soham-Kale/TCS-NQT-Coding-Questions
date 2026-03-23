#include<bits/stdc++.h>
using namespace std;

int main () 
{
    int hours;
    cin >> hours;
    
    if(hours <= 2 ) {
        cout << 100;
    } else if( hours <= 5 ) {
        cout << 50;
    } else {
        cout << 20;
    }
    
    return 0;
}