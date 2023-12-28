#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int minFlips(int a, int b, int c) {
        int cnt = 0;
        for(int i=0; i<32; i++){
            int x = (a>>i) & 1;
            int y = (b>>i) & 1;
            int z = (c>>i) & 1;

            if(z==1){
                if(x==0 and y==0) cnt++;
            }else{
                if(x==1)cnt++;
                if(y==1)cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
