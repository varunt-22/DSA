#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        //precompute
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<"\n";
    }
    // int q;
    // cin>>q;
    // while(q--)
    // {
    //     int number;
    //     cin>>number;
    //      //fetch
    //      cout<<mpp[number];
    // }
    return 0;
}