# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int array[n];
    for (int i = 0; i < n; i++)     // O(N)
    {
        cin >> array[i];
    }
    for(int i = 0; i < q; i++)
    {
        int a;
        int flag = 0;
        cin >> a;
        for (int i = 0; i < n; i++)      // O(N*N)
        {
            if (a == array[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1) cout << "found" << endl;
        else cout << "Not found" << endl;
    }
    return 0; 
}
