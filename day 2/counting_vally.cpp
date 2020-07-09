#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	char s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}

	int sea_level=0;
	int vally_count=0;
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]=='U')
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count==sea_level && s[i]=='U')
		{
           vally_count++;
		} 
	}
	cout<<vally_count;
}
