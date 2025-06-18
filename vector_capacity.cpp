#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // vector<int> v;
    // cout<<v.size();
    // cout<<v.capacity();
    // cout<<v.max_size();
    vector<int> v1 (10,5);
    // cout<<v1.size();
    // v1.clear();
    // cout<<v1.size();
    if (v1.empty()==true)
    {
       cout<<"hello";
    }
    v1.resize(20,0);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    
    
    return 0;
}