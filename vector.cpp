#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector initialization
    vector<int> v1;       // type 1 // o(1)
    vector<int> v2(5);    // type 2 //o(n)
    vector<int> v3(5, 0); // type 3 // o(n)
    vector<int> v4(v3);   // type 4 // o(n)
    int array[5] = {0};
    vector<int> v5(array, array + 3); // type 5 // o(n)
    vector<int> v6 = {2, 3, 35};      // type 6 // o(n)

    for (int i = 0; i < 3; i++)
    {
        cout << v6[i] << " ";
    }

    return 0;
}