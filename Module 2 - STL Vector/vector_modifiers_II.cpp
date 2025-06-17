# include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,2,5,2};
    // replace(v.begin(),v.end(),2,100);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    auto it = find(v.begin(),v.end(),3);
    if (it == v.end()) cout << "Not found" << endl;
    else cout << "found" << endl;
    cout << endl;
    return 0; 
}