#include <bits/stdc++.h>
#define N 4
using namespace std;
 
// Function that will give
// the max negative value
int after_rev(vector<int> v)
{
    int mini = 0, count = 0;
 
    for (int i = 0; i < v.size(); i++) {
        count += v[i];
 
        // Check for count
        // greater than 0
        // as we require only
        // negative solution
        if (count < 0)
            count = 0;
 
        if (mini < count)
            mini = count;
    }
 
    return mini;
}
 
// Function to print the minimum sum
void print(int arr[N])
{
    int sum = 0;
 
    // Taking sum of only
    // even index elements
    for (int i = 1; i < N; i += 2)
        sum += arr[i];
 
    // Initialize two vectors v1, v2
    vector<int> v1, v2;
 
    // v1 will keep account for change
    // if 1th index element goes to 0
    for (int i = 1; i + 1 < N; i += 2)
        v1.push_back(arr[i + 1] - arr[i]);
 
    // v2 will keep account for change
    // if 1th index element goes to 2
    for (int i = 2; i + 1 < N; i += 2)
        v2.push_back(arr[i] - arr[i + 1]);
 
    // Get the max negative value
    int change = max(after_rev(v1),
                     after_rev(v2));
    if (change > 0)
        sum += change;
 
    cout << sum << endl;
}
 
// Driver code
int main()
{
 
    int arr[N] = { 3,3,2,1 };
    print(arr);
    return 0;
}
