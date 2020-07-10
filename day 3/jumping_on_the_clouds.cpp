#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;

    int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int e=100;
    
	for(int i=0;i<n;i+=k)
	{
		if(arr[(i+k)%n]==1)
		{
           e=e-1-2;
		}
		else
		{
			e=e-1;
		}
	}
	cout<<e;
}