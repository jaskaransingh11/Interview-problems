#include<bits/stdc++.h>
using namespace std;


int ways(int n)
{
    vector<int> dp(n+1);
    dp[0]=1;dp[1]=1;
    if(n==1 || n==0)
    {
        return 1;
    }
    // if(n==2)
    // {
    //     return 2;
    // }
    for(int i=2;i<n+1;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<ways(n);
    return 0;
}