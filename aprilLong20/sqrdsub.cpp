#include <bits/stdc++.h>
using namespace std;

long long getNoSubarraysSumToSum(int* input, int n, int sum) {
    
    unordered_map<long long, long long> prevSums;
    
    long long count = 0;
    int currSum = 0;
    for(int i = 0; i < n; i++) {
        currSum += input[i];
        
        if(currSum == sum) {
            count++;
        }
        
        if(prevSums.find(currSum - sum) != prevSums.end()) {
            count += prevSums[currSum - sum];
        }
        
        prevSums[currSum]++;
    }
    
    return count;
}


void solve() {
    int n;
    cin >> n;
    int input[n];
    int number;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
        if(input[i] < 0) {
            input[i] *= -1;
        }
    }
    
    int temp[n];
    // make temp
    for(int i = 0; i < n; i++) {
        if(input[i] % 2 == 1) {
             temp[i] = 0;
        }
        else {
            if(input[i] % 4 == 0) {
                temp[i] = 2;
            }
            else {
                temp[i] = 1;
            }
        }
    }
    
    long long total = ((long long) n * (n+1)) / 2;
    
    long long garbage = getNoSubarraysSumToSum(temp, n, 1);
    
    cout << total - garbage << endl;
    return;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
