# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)  // O(N)
    {
        for (int j = 0; j < n; j*=2)  // O(Log N)
        {
            cout << "Hello";
        }
    }
    return 0; 
}
// Time Complexity: O(NLog N)