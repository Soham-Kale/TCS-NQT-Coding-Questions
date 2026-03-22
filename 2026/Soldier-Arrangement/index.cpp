#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, R, end;
    cin >> N >> R >> end;

    vector<vector<int>> dp(N + 1, vector<int>(R + 1, 0));

    dp[1][1] = 1;

    for(int i = 2; i <= N; i++) {
        int total = 0;

        // sum of previous row
        for(int j = 1; j <= R; j++) {
            total += dp[i - 1][j];
        }

        for(int j = 1; j <= R; j++) {
            dp[i][j] = total - dp[i - 1][j]; // remove same value case
        }
    }

    cout << dp[N][end];

    return 0;
}