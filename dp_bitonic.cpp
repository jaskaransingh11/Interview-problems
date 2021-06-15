#include<bits/stdc++.h>
using namespace std;

void fun(int to,vector<int> &a)
{
    int left[to];
    int right[to];
    int i;int p;
    left[0]=1;p=left[0];
    for(i=1;i<to;i++)
    {
        left[i]= (a[i]>a[i-1]) ?left[i-1]+1:1;
        
  
    }
    right[to-1]=1;
    p=right[to-1];
     for(i=to-2;i>=0;i--)
    {
        right[i]= (a[i]>a[i+1]) ?right[i+1]+1:1;
        
 
    }
    p=right[to-1]+left[to-1];
    for(i=to-2;i>=0;i--)
    {
       p=max(right[i]+left[i],p);
        
 
    }
    cout<<p-1;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int to= arr.size();
    fun(to,arr);
}