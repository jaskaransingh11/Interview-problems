#include<bits/stdc++.h>
using namespace std;

int maxloot(vector<int> &hval)
{
    int n=hval.size();
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return hval[0];
    }
    if (n==2)
    {
        return max(hval[0],hval[1]);

    }
    int dp[n];dp[0]=hval[0];dp[1]=max(hval[0],hval[1]);
    for(int i=2;i<n;i++)
    {
        dp[i]= max(dp[i-2]+hval[i],dp[i-1]);
    }
    return dp[n-1];


    
}

int main()
{
    vector<int> hval = {6, 7, 1, 3, 8, 2, 4};
    cout<<maxloot(hval);
    return 0;
}