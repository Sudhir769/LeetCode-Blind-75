#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        int size = flowerbed.size();
        for(int i=0;i<size;i++){
            if(flowerbed[i]==0 and (i==0 or flowerbed[i-1]==0) and
                (i==size-1 or flowerbed[i+1] == 0)){
                flowerbed[i]=1;
                n--;
                if(n==0)  break;
            }
        }
        return n==0;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        vector<int> v = {1, 0, 1, 0, 0, 0, 1};
        int n = 1;
        Solution ob;

        bool ans = ob.canPlaceFlowers(v, n);
        cout<<ans<<endl;
    }
}