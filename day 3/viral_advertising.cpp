#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

    int shared=5,liked=2,cumlative=2;
	for(int i=1;i<n;i++)
	{
		shared=(shared/2)*3;
		liked=shared/2;
		cumlative+=liked;
	}
	cout<<cumlative;
}