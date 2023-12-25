#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int numTilings(int n) {
        int mod = 1e9+7;

        vector<long long>domino {0, 1, 2, 5};

        if(n<=3) return domino[n];

        for(int i=4; i<=n; i++){
            domino.push_back((2*domino[i-1] + domino[i-3])%mod);
        }
        return domino[n];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

