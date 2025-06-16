# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;        // O(1)
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;              // O(1)
    }
    cout << sum;
    return 0; 
}

// Even if the loops runs n'th time. But it doesn't declare a new variable
// every time it runs. So -
// Space Complexity: O(1)
// Time Complextiy: O(N)

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;                       // O(1)
    cin >> n;
    int array[n];               // O(N)
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];             
    }
    return 0; 
}

// The array size depending on N. So -
// space complexity: O(N)
// Time Complexity: O(N)

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;                        // O(1)
    cin >> n;
    int array[n][n];              // O(N*N)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }           
    }
    return 0; 
}

// in case of 2D array. Space Complexity will be O(N*N).
// Time complexity of this code is also O(N*N).