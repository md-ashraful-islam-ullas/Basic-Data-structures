# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;  // O(1)
    cin >> n; // O(1)
    for (int i = 0; i < n; i++)   // O(N)
    {
        cout << i << " ";            
    }
    return 0;   // O(1)
}

// we always take the worst case. So, the time complexity
// of this code us O(N)

// if the comparsion inside the loop is (n/2) , (n+2), (n*2) , (n-2)
// or something like that. The complexity would still O(N).
// Because we ignore the constant. 

// it would be the same for increment and decrement. Doesn't matter.
// still O(N). 

// if there's multiple O(N) loops. it still O(N). 