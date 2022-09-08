#include<algorithm>
int findUnique(int *arr, int n) {
    // Write your code here
   int i=0;
   sort(arr,arr+n);
   while(i<n){
       if(arr[i]==arr[i+1])
       {
           i++;
       }
       else
       {
           return arr[i];
       }
       i++;
   }
}
