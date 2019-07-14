#include<bits/stdc++.h>
using namespace std;
int dp[10000001];
int main() {
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=10000000;i++)
    {
	 if(i%2==0)dp[i]=dp[i/2]+1;
	 else
	 {
	     int k=dp[i-1]+1;
	     int l=dp[(i+1)/2]+2;
	     dp[i]=k<l?k:l;
	 }
    }
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	cout<<dp[n]<<endl;
    }
    return 0;
}
