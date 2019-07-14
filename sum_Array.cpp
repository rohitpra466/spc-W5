#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void maximum(int p[],int n)
{
    vector<pair<int,int>>v;
    int k;
    if(n==1)
    {
        cout<<p[0]<<endl;
        return;
    }
    v.push_back(make_pair(p[0],0));
    k=max(p[0],p[1]);
    if(n==2)
    {
        cout<<p[0]<<" "<<k<<endl;
        return ;
    }
    if(p[0]==k)v.push_back(make_pair(p[0],0));
    else v.push_back(make_pair(p[1],1));
    for(int i=2;i<n;i++)
    {
        if(v[i-1].second==i-1)
        {
            if(v[i-2].first+p[i]>=v[i-1].first)v.push_back(make_pair(v[i-2].first+p[i],i));
            else v.push_back(make_pair(v[i-1].first,v[i-1].second));
        }
        else 
        {
            v.push_back(make_pair(v[i-1].first+p[i],i));
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" ";
    }
    cout<<endl;
    return ;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int p[n];
	    for(int i=0;i<n;i++)cin>>p[i];
	    maximum(p,n);
	}
	return 0;
}
