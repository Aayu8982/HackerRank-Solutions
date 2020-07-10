#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;

    int arr[n];

	for(int i=0;i<n;i++)
      cin>>arr[i];

  int max=0;
  for(int i=0;i<n;i++)
  {
     if(arr[i]>max)
     	max=arr[i];
  }

  if(max>k)
  	cout<<max-k<<endl;
  else
  	cout<<0<<endl;
}