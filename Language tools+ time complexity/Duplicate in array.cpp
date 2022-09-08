#include<set>
int findDuplicate(int *arr, int n)
{
    //Write your code here
    int sum=0;
    for(int i=0;i<n;i++){
      sum=sum+arr[i];
}
    int sum2=((n-1)*(n-2))/2;
    return sum-sum2;
}
