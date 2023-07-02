#include<bits/stdc++.h>
using namespace std;

void determineBuildings(int num, vector<int> amounts){
    //Initialize variables to track the best building for Jagannath and the earnings for his brothers
    int best = -1;
    int earnings = 0;

    for(int i = 0; i < num; ++i){
        if(amounts[i] < earnings) continue; //If the current building offers less earnings, skip
        int left = i > 0 ? amounts[i-1] : 0;
        int right = i < - 1 ? amounts[i+1] : 0;
        if(left == right){
            best = i+1;
            earnings = left;
        }
    }

    if(best == -1) cout<< 0 << " " << 0 << endl;
    else cout<< best<< endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }

        determineBuildings(n, a);
    }

    return 0;
}
