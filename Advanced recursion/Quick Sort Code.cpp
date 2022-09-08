/*Quick Sort Code
Send Feedback
Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.


Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
Output format :
Array elements in increasing order (separated by space)
Constraints :
1 <= n <= 10^3
Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
1 5 2 7 3
Sample Output 2 :
1 2 3 5 7 */
#include<iostream>
using namespace std;
int partition(int input[],int start,int end){
    int index=0;
    for(int i=start+1;i<=end;i++){
        if(input[i]<=input[start]){
            index=index+1;
        }
    }
    int PivotIndex=start+index;
    int temp=input[start];
    input[start]=input[PivotIndex];
    input[PivotIndex]=temp;
    
    int i=start;
    int j=end;
    while(i<=PivotIndex && j>=PivotIndex){
        while(input[i]<=input[PivotIndex]){
            i++;
        }
        while(input[j]>input[PivotIndex]){
            j--;
        }
        if(i<j){
            int ne=input[i];
            input[i]=input[j];
            input[j]=ne;
            i++;
            j--;
        }
    }
    return PivotIndex;
}
  
void sort(int input[],int start,int end){
    if(start >=end){
        return ;
    }
    int c=partition(input,start,end);
    sort(input,start,c-1);
    sort(input,c+1,end);
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
   sort(input,0,size-1);

}

