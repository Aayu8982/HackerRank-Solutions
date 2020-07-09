#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int orignal[n];
    for(int i=0;i<n;i++)
        cin>>orignal[i];

    for(int i=0;i<n;i++)
    {
        int temp=orignal[i]/5;
        if(((5*temp)+5)-orignal[i]<3 && orignal[i]>37)
            orignal[i]=((5*temp)+5);
    }
    for(int i=0;i<n;i++)
        cout<<orignal[i]<<endl;

    return 0;
} 