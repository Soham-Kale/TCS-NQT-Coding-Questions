#include <bits/stdc++.h>
using namespace std;

int minOperations(int p, int q, int r) {
    if(p == q == r){
        return 0;
    }

    vector<int> arr = {p, q, r};
    sort(arr.begin(), arr.end());
    int step = 0;

    while(true){
        arr[0]--;
        arr[1]--;
        arr[2]--;
        step++;

        if(arr[0] == arr[1] && arr[1] == arr[2]){
            return step;
        }

        sort(arr.begin(), arr.end());

        if((arr[0] == arr[1] && arr[1] + 1 == arr[2]) || (arr[1] == arr[2] && arr[0] + 1 == arr[1])){
            return -1;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int p, q, r;
        cin >> p >> q >> r;
        
        int ans = minOperations(p, q, r);
        cout << ans << endl;
    }
    return 0;
}