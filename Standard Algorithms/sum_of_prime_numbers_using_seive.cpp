#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x;
		cin>>x;
		std::vector<bool> isthisprime(x+1,true);
		isthisprime[0]=false;
		isthisprime[1]=false;
		for(int i=2;i<=x;i++)
		{
			if(isthisprime[i]==true)
			{
				for(int j=i*2;j<=x;j+=i)
				{
					isthisprime[j]=false;
				}
			}
		}
		ll sum=0;
		for(ll i=0;i<=x;i++)
		{
			if(isthisprime[i]==true)
				sum=sum+i;

		}
		cout<<sum<<endl;
	}
		
}