/*Merge Sort Code
Send Feedback
Sort an array A using Merge Sort.
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
2 1 5 2 3
Sample Output 2 :
1 2 2 3 5 */
#include<iostream>
using namespace std;
void merge(int input[],int start,int mid,int midu,int end){
    int i=0;
    int j=start;
    int k=midu;
    int temp[end-start+1];
    while(j<=mid && k<=end){
        if(input[j]>=input[k]){
            temp[i++]=input[k++];
        }
        else {
            temp[i++]=input[j++];
        }
    }
    while(j<=mid){
        temp[i++]=input[j++];
    }
    while(k<=end){
        temp[i++]=input[k++];
    }
    for(int i=0,k=start;k<=end;k++,i++)
    {
        input[k]=temp[i];
    }
}

void sort(int input[],int start, int end){
   
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    sort(input,start,mid);
    sort(input,mid+1,end);
    merge(input,start,mid,mid+1,end);
}
void mergeSort(int input[], int size){
	// Write your code her
    sort(input,0,size-1);
}

