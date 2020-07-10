#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[26];
	for(int i=0;i<26;i++)
	{
		cin>>arr[i];
	}
	string str;
	cin>>str;
	
	int word_size=str.size();

    int max=arr[str[0]-97];
	for(int i=0;i<word_size;i++)
	{
		if(arr[str[i]-97]>max)
			max=arr[str[i]-97];
	}
	cout<<max*word_size;

}