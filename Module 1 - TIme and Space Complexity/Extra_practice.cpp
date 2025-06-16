// Problem 1

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, sum = 0, n;
    cin >> n;
    while (i < n)          // O(N)
    {
        int j = 0;
        while (j < n)      // O(N)
        {
            sum += j;
            j += 2;
        }
        i++;
    }
    return 0; 
}
// Time complexity: O(N*N). 
// It's a Nested loops. each loops is O(N).
// Increment is also fine. 

// Problem 2

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i+=10)              // O(N)
    {
        for (int j = 0; j >= n; j--)           // O(N)
        {
            cout << "Hello" << endl;          
        }
    }

    for (int i = 0; i < n; i++)               // O(N)
    {
        cout << "Hi" << endl;     
    }
    return 0; 
}
// Time complexity: O(N*N)
// The first loops is a nested loops.So, the time complexity of that is O(N*N).
// The second loops has O(N) complexity.
// we take the worst case.
// O(N*N) < O(N)

// Problem 3

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)               // O(N)
    {
        int j = 0;
        while (j*j<n)                        // O(sqrt(N))
        {
            i+j;
            j++;
        }
    }
    return 0; 
}
// Time complexity: O(N*sqrt(N))
// outer loops runs n'th time.So, The complexity is O(N).
// Inner loops runs sqrt(n) times. So, The complexity is O(sqrt(N)).
// we are saying the complexity is O(N*sqrt(N)). bcz its a nested loops.
// if its two different loops. then its only O(N).
// bcz between O(N) and O(sqrt(N)). O(N) is the worst.

// Problem 4

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)              // O(N)
    {
        for (int j = n; j >= 0; j--)         // O(N)
        {
            for (int k = 1; k <= n; k++)     // O(N) 
            { 
                sum += i+j+k;
            }
        }
    }
    for (int i = 0; i < n; i++)              // O(N)
    {
        for (int j = 1; j <= n; j++)         // O(N)
        {
            sum += i+j;
        }
    }
    return 0; 
}
// Time complxity: O(N*N*N)

// Problem 5

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 2;
    int sum = 0;
    for(int i=0;i*i<n;i++)           // O(sqrt(N))
    {
        sum += i;
    }


    for(int i=0;i<n;i++)            // O(Log N)
    {
        sum += i;
        i*=k;
    }

    return 0; 
}
// Time complexity: O(sqrt(N))
// inside the first loop (i*i<n) is the same as i < sqrt(n).
// For the second loop, in the first iteration, i++ works. 
// In the second, it still works because i was small. 
// But from the third iteration onward, i++ doesn't really matter anymore, 
// because i *= k is making i jump ahead.
// So- second loop time complexity is O(Log N)
// we take the worst one. so final answer: O(sqrt(N))

// Problem 6

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)            // O(N)
    {
        cin >> a[i];
    }
    sort(a,a+n);                   // O(N Log N)
    return 0; 
}
// Time complxity: O(N Log N)
// for the sort function, the complexity is always O(N Log N).


// Problem 7

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)         // O(N)
    {
        sort(a,a+n);             // O(N Log N)
    }
    return 0; 
}
// Time Complexity: O((N*N) log N)
// Each iteration does a full sort → O(N log N)
// Repeats N times.