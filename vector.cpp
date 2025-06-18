#include<bits/stdc++.h>
using namespace std;
int main ()
{
   // vector initialization
   vector<int> v1 ; //type 1 // o(1)
    vector <int> v2(5); // type 2 //o(n)
    vector<int> v3(5,-1);
    for (int i = 0; i < 5; i++)
    {
        cout<<v3[i]<<" ";
    }
    


    return 0;
}