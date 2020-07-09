#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bob[3],alice[3];
    for(int i=0;i<3;i++)
        cin>>bob[i];
    for(int i=0;i<3;i++)
      cin>>alice[i];
    
    int bob_count=0,alice_count=0;
    for(int i=0;i<3;i++)
    {
        if(bob[i]>alice[i])
        {
           bob_count++;
        }
        else if(bob[i]<alice[i])
        {
            alice_count++;
        }
        else if(bob[i]==alice[i])
        {
            continue;
        }
    }
    cout<<bob_count<<" "<<alice_count<<endl;
    return 0;
}
