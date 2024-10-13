#include <bits/stdc++.h>
using namespace std;
using namespace std;
int fib(int);

int main()
{
    cout<<"n:";
    int n;
    cin>> n;
    cout<<"fib of n:"<<fib(n);
    
    return 0;
}
int fib(int n) {

    if(n ==0) return 0;
    else if(n==1) return 1;
    vector<int> dp(n+1,0);
    dp[0]=0;
    dp[1]=1;
    for(int i=2 ;i <= n ;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}