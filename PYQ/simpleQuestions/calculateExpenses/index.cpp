#include <bits/stdc++.h>
using namespace std;

int main() {
    int totalIncome;
    cin >> totalIncome;

    string category;
    int expense;

    int totalExpenses = 0;

    // for storing expenses by category    
    unordered_map<string, int> categoryMap;

    while (true) {
        cin >> category;

        if (category == "done") {
            break;
        }

        cin >> expense;

        totalExpenses += expense;
        categoryMap[category] += expense;
    }

    int savings = totalIncome - totalExpenses;

    // Output
    cout << "Total Income: " << totalIncome << endl;
    cout << "Total Expenses: " << totalExpenses << endl;
    cout << "Total Savings: " << savings << endl;

    cout << "Category:" << endl;
    for (auto &it : categoryMap) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}