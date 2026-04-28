#include<bits/stdc++.h>
using namespace std;

int main() {
    int income;
    cin >> income;

    string category;
    int expense;
    
    int totalExpenditure = 0;
    
    unordered_map<string, int> mp;
    vector<string> order; // store input order

    while(true) {
        cin >> category;
        
        if(category == "done") {
            break;
        }
        
        cin >> expense;
        
        totalExpenditure += expense;

        // if category appears first time
        if(mp.find(category) == mp.end()) {
            order.push_back(category);
        }

        mp[category] += expense;
    }
    
    int savings = income - totalExpenditure;
    
    cout << "Total Income: " << income << endl;
    cout << "Total Expenses: " << totalExpenditure << endl;
    cout << "Total Savings: " << savings << endl;

    cout << "Category:" << endl;

    // print in input order
    for(string cat : order) {
        cout << cat << ": " << mp[cat] << endl;
    }
}