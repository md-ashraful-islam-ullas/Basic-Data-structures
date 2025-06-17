# include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,4,5};
    vector <int> v2(v);
    // v2 = v;
    // for(int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    // cout << endl;
    // v2.pop_back();
    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    vector <int> v3 = {100,200,300};
    // v2.insert(v2.begin()+2, v3.begin(),v3.end());    // adding multiple value
    // for(int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    v2.erase(v2.begin()+2);       // erase single element
    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    // v2.erase(v2.begin()+1, v.begin()+5);  // erase multiple element
    return 0; 
}