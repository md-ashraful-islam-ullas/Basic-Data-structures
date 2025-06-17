# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <string> v(n);
    // without space
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // with space
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0; 
}