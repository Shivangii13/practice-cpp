#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& a, int t) {
        int n = a.size();
        int l = 0, r= n-1;
        while(l<=r){
            int m =(l+r)/2;
            if(a[m]==t)
               return m;
            else if(a[l]<=a[m]){
                if(a[l]<=t and t<a[m]){
                    r=m-1;
                }
                else l= m+1;
            }
            else{
                if(a[m]<t and t<=a[r]){
                    l=m+1;
                }
                else r=m-1;
            }
        }
        return -1;
        
    }
};