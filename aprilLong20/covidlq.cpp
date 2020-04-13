#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
	int n;
	cin >> n;
	int input[n];
	for(int i = 0; i < n; i++) {
	    cin >> input[i];
	}
	bool faulty = false;
	int window = 5;
	int i = 0;
	while(i < n){
	    if(input[i] == 1) {
		int j = 1;
		while((i + j) < n && j <= 5){
		    //cout << "visited1" << endl;
		    if(input[i+j] == 1) {
			faulty = true;
			break;
		    }
		    j++;
		}
		if(faulty) {
		    //cout << "visited2" << endl;
		    break;
		}
		i = i+j;
	    }
	    else {
		i++;
		//cout << "visited3" << endl;
	    }
	}
	if(faulty) {
	    cout << "NO" << endl;
	}
	else {
	    cout << "YES" << endl;
	}
	// cout << "working" << endl;
    }
    return 0;
}
