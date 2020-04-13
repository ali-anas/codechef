#include <bits/stdc++.h> 
using namespace std; 

void solve() 
{ 
    
    int n, k;
    cin >> n >> k;
    vector<long long> P;  
    while (n%2 == 0) 
    { 
        P.push_back(2); 
        n /= 2; 
    } 
   
    for (long long i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            P.push_back(i); 
        } 
    }
    if (n > 2) 
        P.push_back(n); 
  
    if (P.size() < k) 
    { 
        cout << 0 << endl;  
    } 
    else {
        cout << 1 << endl;
    }
} 

int main() 
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        solve();
    } 
    return 0;
} 
