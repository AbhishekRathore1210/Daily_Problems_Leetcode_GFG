#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int sum(int a,vector<int>& dp){
        //base case
        if(a==0)return 0;

        //rec case 
        int first = sum(a/2,dp);
        int second = sum(a/3,dp);
        int third = sum(a/4,dp);
        return max((first+second+third),a);
    }
    int maxSum(int n){
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        return sum(n,dp);
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<endl;
    }
    return 0;
}