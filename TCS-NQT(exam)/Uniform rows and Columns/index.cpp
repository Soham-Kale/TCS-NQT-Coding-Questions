Logic ::
1. Let n = sqrt(length of string).
2. Convert the string into an n x n grid (row-wise).
3. Count:
    Rows where all characters are the same.
    Columns where all characters are the same.
4. Return the total count.


#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int len = s.length();
    int n = sqrt(len);

    vector<vector<char>> grid(n, vector<char>(n));

    int index = 0;

    // Fill grid row-wise
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            grid[i][j] = s[index++];
        }
    }

    int count = 0;

    // Check uniform rows
    for(int i = 0; i < n; i++) {
        bool same = true;
        for(int j = 1; j < n; j++) {
            if(grid[i][j] != grid[i][0]) {
                same = false;
                break;
            }
        }
        if(same) count++;
    }

    // Check uniform columns
    for(int j = 0; j < n; j++) {
        bool same = true;
        for(int i = 1; i < n; i++) {
            if(grid[i][j] != grid[0][j]) {
                same = false;
                break;
            }
        }
        if(same) count++;
    }

    cout << "Output: " << count << endl;

    return 0;
}
