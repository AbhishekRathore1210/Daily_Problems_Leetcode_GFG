#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int ans = 0;
        int left =0;
        int n= tokens.size();
        int right = n-1;
        int res = 0;
        while(left<=right){
            if(power>=tokens[left]){
                power -= tokens[left];
                ans++;
                left++;
            }
            else if(ans>=1){
                power += tokens[right];
                ans--;
                right--;
            }
            else{
                return ans;
            }
            res = max(ans,res);
        }
        return res;
    }
};