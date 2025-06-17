# include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v;   // type 1                       O(1)
    // vector <int> v(10);   // type 2 (All zero)        O(N)

    // vector <int> v(5,2);     // type 3                O(N)
    // vector <int> v2(v);      // type 4  (v2 copy all elements from v)   O(N)

    // int a[5] = {1,2,3,4,5};
    // vector <int> v(a,a+5);      // type 5 (copy array elements)         O(N)

    vector <int> v = {1,2,3,4};    // type 6 (initialize vector like array)  

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0; 
}