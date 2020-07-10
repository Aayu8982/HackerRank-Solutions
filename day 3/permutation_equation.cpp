#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[j]==i)
            {
               for(int k=1;k<=n;k++)
               {
                   if(arr[k]==j)
                   cout<<k<<endl;
               }
            }
        }
    }
}