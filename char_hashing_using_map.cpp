#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s="aabcdedd";
    map<char, int> mpp;
    for(int i=0;i<s.size();i++)
    {
        mpp[s[i]]+=1;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<"\n";
    }
    return 0;
}