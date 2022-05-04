#include<bits/stdc++.h>
using namespace std;

int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                long long dp[n];
                dp[1] = 1;
                dp[2] = 4;
                
                for(long long i=3; i<=n; i++){
                        dp[i] = dp[i-1];

                        // i i i
                        dp[i]++;

                        // i i i-1/i-2
                        dp[i] +=2;

                        // i i-1 i-1 / i i-2 i-2
                        dp[i] += 2;

                        // i i-1 i-2
                        dp[i]++;

                        // i i-2/i-1 i-3
                        if(i > 3){
                                dp[i] += 2;
                        }

                        // i i-4 i-2
                        if(i > 4){
                                dp[i]++;
                        }
                }

                cout<<dp[n]<<endl;
        }
}