#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double res=1.0;
        long temp=n;
        if(temp<0)
            temp=(-1)*temp;
        while(temp>0){
            if(temp%2==1){
                res = res*x;
                temp--;
            } else{
                x = x*x;
                temp=temp/2;
            }
        }
        if(n>0){
            return res;
        } else{
            return (double)1/(double)res;
        }
    }
};