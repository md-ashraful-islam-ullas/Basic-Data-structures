# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n/i << endl;
        }
    }
    return 0; 
}

// Time complexity of this code is: O(sqrt(N)).
// when we use sqrt function inside of the loop,
// it becames O(sqrt(N)) complexity.
// Use case: for divisor problem.
// n = 36. but the loops runs only 6 time. which is sqrt(36). 
// i <= sqrt(n) is the same as i*i <= n