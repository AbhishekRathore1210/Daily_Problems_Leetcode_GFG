#include<bits/stdc++.h>
using namespace std;
  int minimumLength(string s) {
        int n = s.length();
        int left = 0;
        int right = n-1;
        while(left < right && s[left] == s[right]){
            char a = s[left];
            left++;
            right--;
            while((left <= right) && s[left]==a)left++;
            while((left <= right) && s[right]==a)right--;
        }
        return right - left + 1;
    }