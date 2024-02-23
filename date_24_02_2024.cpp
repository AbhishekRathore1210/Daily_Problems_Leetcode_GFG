#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int sum(int a){
        //base case
        if(a==0)return 0;

        //rec case 
        int first = sum(a/2);
        int second = sum(a/3);
        int third = sum(a/4);
        return max((first+second+third),a);
    }
    int maxSum(int n){
        return sum(n);
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