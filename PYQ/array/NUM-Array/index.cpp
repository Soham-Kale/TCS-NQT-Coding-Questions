#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int cnt = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {

                string t1 = (to_string(arr[i]) + to_string(arr[j]));
                int sum1 = stoi(t1);

                if(sum1 >= x && sum1 <= y) {
                    cnt++;
                }

                if(i != j) {
                    string t2 = (to_string(arr[j]) + to_string(arr[i]));
                    int sum2 = stoi(t2);

                    if(sum2 >= x && sum2 <= y) {
                        cnt++;
                    }
                }
            }
        }

        cout << cnt << " ";
    }

    return 0;
}