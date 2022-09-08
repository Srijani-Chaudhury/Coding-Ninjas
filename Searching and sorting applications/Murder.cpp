/*Murder
Send Feedback
Once detective Saikat was solving a murder case. While going to the crime scene he took the stairs and saw that a number is written on every stair. He found it suspicious and decides to remember all the numbers that he has seen till now. While remembering the numbers he found that he can find some pattern in those numbers. So he decides that for each number on the stairs he will note down the sum of all the numbers previously seen on the stairs which are smaller than the present number. Calculate the sum of all the numbers written on his notes diary.
Answer may not fit in integer . You have to take long.
Input Format:
First line of input contains an integer T, representing number of test case.
For each test case, first line of input contains integer N, representing the number of stairs.
For each test case, second line of input contains N space separated integers, representing numbers written on the stairs.
Constraints
T<=10^5
1<=N<=10^5
All numbers will be between 0 and 10^9
Sum of N over all test cases doesn't exceed 5*10^5
Output Format
For each test case output one line giving the final sum for each test case.
Sample Input 1:
1
5
1 5 3 6 4
Sample Output 1:
15
Explanation:
For the first number, the contribution to the sum is 0.
For the second number, the contribution to the sum is 1.
For the third number, the contribution to the sum is 1.
For the fourth number, the contribution to the sum is 9 (1+5+3).
For the fifth number, the contribution to the sum is 4 (1+3).
Hence the sum is 15 (0+1+1+9+4)*/

#include<bits/stdc++.h>
using namespace std;

long long merge(int *arr, int start, int end) {
    long long ans = 0;
    long long i = start, mid = (start+end)/2, j = mid+1, k = 0;
    long long *temp = new long long[end-start+1];
    while(i <= mid && j <= end) {
        if(arr[i] < arr[j]) {
            ans += (end-j+1)*arr[i];
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    while(i <= mid) {
        temp[k++] = arr[i++];
    }
    while(j <= end) {
        temp[k++] = arr[j++];
    }
    for(int i = start, k = 0; i <= end; i++, k++) {
        arr[i] = temp[k];
    }
    delete[] temp;
    return ans;
}

long long sumOfNumbers(int *arr, int start, int end) {
    if(start >= end) {
        return 0;
    }
    long long mid = (start+end)/2;
    long long leftAns = sumOfNumbers(arr, start, mid);
    long long rightAns = sumOfNumbers(arr, mid+1, end);
    long long smallAns = merge(arr, start, end);
    return leftAns+rightAns+smallAns;
}

long long sumOfNumbers(int *arr, int n) {
    return sumOfNumbers(arr, 0, n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int *arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << sumOfNumbers(arr, n) << '\n';
        delete[] arr;
    }
    return 0;
}
