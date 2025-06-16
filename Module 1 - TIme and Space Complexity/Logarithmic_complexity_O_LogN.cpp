# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i*=2)  // O(Log N)
    {
        cout << i << endl;
    }
    return 0; 
}
// the time complexity of this code is O(Log N).

// if increasing means multiplying and decreasing means dividing, 
// then the time it takes grows like Log N -
// so the time complexity is O(Log N).

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i/=3)
    {
        cout << i << endl;
    }
    return 0; 
}

// time complexity is O(Log N).

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k =2;
    for (int i = 1; i < n; i++)
    {
        cout << i << endl;
        i = i*k;
    }
    return 0; 
} 

// i is incrementing by multiplying k. so even if it's i++ in loop
// but it's multiplying k inside -
// so the time complexity of this code is O(Log N). 