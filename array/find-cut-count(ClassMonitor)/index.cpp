#include<bits/stdc++.h>
using namespace std;

int count(const vector<int>&ranks) {
    int best = ranks[0];
    int cutCount = 0;
    
    for(int i=1; i<ranks.size(); i++) {
        if(ranks[i] < best) {
            cutCount++;
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