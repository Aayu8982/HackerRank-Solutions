#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p;
	cin>>n>>p;
    
    int total=n/2;
    int target_front=p/2;

    int target_back=total-target_front;

    if(target_front<target_front)
    	cout<<target_front;
    else
    	cout<<target_back;
 

}