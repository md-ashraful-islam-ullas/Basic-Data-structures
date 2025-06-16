# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)  // O(N)
    {
        for (int j = 0; j < n; j++)  // O(N)
        {
            cout << "Hello";
        }
    }
    return 0; 
}

// Time complexity: O(N*N)

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)  // O(N)
    {
        for (int j = 0; j < n; j++)  // O(N)
        {
            for (int k = 0; k < n; k++)  // O(N)
            {
                cout << "Hello";
            }
        }
    }
    return 0; 
}
// Time complexity: O(N*N*N)

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)  // O(N)
    {
        for (int j = 0; j < m; j++)  // O(N)
        {
            cout << "Hello";
        }
    }
    return 0; 
}
// Time complexity: O(N*M) 
// Use case: Nested loops. 