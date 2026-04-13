#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int write = 0;
    int read = 0;

    while (read < n) {
        char current = chars[read];
        int count = 0;

        // count frequency
        while (read < n && chars[read] == current) {
            read++;
            count++;
        }

        // write character
        chars[write++] = current;

        // write count if > 1
        if (count > 1) {
            string str = to_string(count);
            for (char c : str) {
                chars[write++] = c;
            }
        }
    }

    return write;
}

int main() {
    int n;
    cin >> n;

    vector<char> chars(n);

    for (int i = 0; i < n; i++) {
        cin >> chars[i];
    }

    int newLength = compress(chars);

    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }

    return 0;
}