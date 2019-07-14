#include<bits/stdc++.h>
using namespace std;
long long int maxValue(string s)
{
    long long int n=s.length(),sum=0;
    sum=s[0]-48;
    for(int i=1;i<n;i++)
    {
        if(s[i]=='0'||s[i]=='1')
        {
            sum+=(s[i]-48);
        }
        else
        {
            if(sum==0||sum==1)sum+=(s[i]-48);
            else sum*=(s[i]-48);
        }
    }
    return sum;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    cout<<maxValue(s)<<endl;
	}
	return 0;
}
