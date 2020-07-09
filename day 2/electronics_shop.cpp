#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,n,m,offerd;
    cin>>b>>n>>m;
    int keyboard[n];
    for(int i=0;i<n;i++)
    {
        cin>>keyboard[i];
    }
    int usb[m];
    for(int i=0;i<m;i++)
    {
        cin>>usb[i];
    }
    int current_sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(keyboard[i]+usb[j]<=b  && keyboard[i]+usb[j]>=current_sum)
            {
                current_sum=keyboard[i]+usb[j];
            }

        }
    }

    if(current_sum==0 )
      cout<<-1<<endl;
    else
    cout<<current_sum;
}
