#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    // vector assign-----------------
    vector<int> b = {5, 4,2,1,3,4, 3, 5};
    a = b;

    // vector push back ---------------------
    // a.push_back(10);
    // a.push_back(20);
    // a.push_back(30);
    // pop back---------------
    // a.pop_back();
    // a.pop_back();
    // vector insert ------------------normalway
    vector<int> c = {3, 2, 1, 2};
    // a.insert(a.begin()+2,3);
    // in a vector insert
    // a.insert(a.begin() + a.size()-1, 4);
    // a.insert(a.begin()+2,2);
    // a.insert(a.begin() + 2, c.begin(), c.end());
    // vector erase function----------------------
    // a.erase(a.begin()+1);

    // erase in diffarent way 
    a.erase(a.begin()+1,a.end()-2);

    // normal for loop -----------------
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
    // range base for loop------------------------
    for (int x : a)
    {
        cout << x << " ";
    }

    return 0;
}