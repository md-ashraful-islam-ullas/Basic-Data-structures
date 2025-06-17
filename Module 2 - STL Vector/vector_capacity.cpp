# include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    cout << v.size() << endl;             // O(1)
    cout << v.capacity() << endl;         // O(1)
    v.push_back(10);                      // O(1)
    v.push_back(20);
    v.push_back(30);
    cout << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // v.clear();        // only clear the value, do not delete the memory.   O(N)
    cout << v.size() << endl; 
    // cout << v[1] << endl;

    cout << v.empty() << endl;           // O(1)

    // v.resize(7);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    cout << endl;
    v.resize(7,10);                     // O(K)  
    // K is the difference between new size and current size.
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0; 
}