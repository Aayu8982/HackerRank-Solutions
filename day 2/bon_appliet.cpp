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

    int b;
    cin>>b;
    
    int total=0;
    for(int i=0;i<n;i++)
    {
      total+=arr[i];
    }


     int actual= (total-arr[k])/2;

    if(actual==b)
    {
        cout<<"Bon Appetit"<<endl;
    }
    else
    {
       cout<<b-actual;
    }
}
