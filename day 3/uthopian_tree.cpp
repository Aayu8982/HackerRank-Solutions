#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
      int cycle;
      cin>>cycle;

      int count=1;

      for(int i=0;i<cycle;i++)
      {
      	if(i%2==0)
      	{
      		count=count*2;
      	}
      	else
      	{
      		count+=1;
      	}
      }
      cout<<count;

	}

}