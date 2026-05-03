#include<bits/stdc++.h>
using namespace std;

int count(const vector<int>&ranks) {
    // The first rank is always the best rank seen so far
    int best = ranks[0];
    int cutCount = 0;
    
    for(int i=1; i<ranks.size(); i++) {
        // If the current rank is better than the best rank seen so far, it means a cut is needed
        if(ranks[i] < best) {
            cutCount++;
            // Update the best rank seen so far to the current rank
            best = ranks[i];
        }
    }
    return cutCount;
}

int main() {
    int countOfStudent;
    cin >> countOfStudent;
    
    vector<int> ranks(countOfStudent);
    for(int i=0; i<countOfStudent; i++) {
        cin >> ranks[i];
    }
    
    int answer = count(ranks);
    cout << answer << endl;
    return 0;
}