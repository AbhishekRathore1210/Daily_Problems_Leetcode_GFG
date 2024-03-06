package GFG;

import java.util.ArrayList;
class Solution
{
    
    ArrayList<Integer> search(String pattern, String text)
    {
       int n = text.length();
       int k = 0;
       ArrayList<Integer> al = new ArrayList<Integer>();
       while(k<n){
           int i = text.indexOf(pattern,k);
           if(i>=0){
               al.add(i+1);
               k = i+1;
           }
           else{
               break;
           }
       }
       return al;
    }
}