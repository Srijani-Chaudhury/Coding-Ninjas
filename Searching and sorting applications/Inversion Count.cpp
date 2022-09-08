/*
    For a given integer array/list 'ARR' of size 'N', find the total number of 'Inversions' that may exist.
	An inversion is defined for a pair of integers in the array/list when the following two conditions are met.
	A pair ('ARR[i]', 'ARR[j]') is said to be an inversion when:
	
	1. 'ARR[i] > 'ARR[j]' 
	2. 'i' < 'j'
	
	Where 'i' and 'j' denote the indices ranging from [0, 'N').
	
	Input format :
	The first line of input contains an integer 'N', denoting the size of the array.
	
	The second line of input contains 'N' integers separated by a single space, denoting the elements of the array 'ARR'.
	Output format :
	Print a single line containing a single integer that denotes the total count of inversions in the input array.
	Note:
	You are not required to print anything, it has been already taken care of. Just implement the given function.  
	Constraints :
	1 <= N <= 10^5 
	1 <= ARR[i] <= 10^9
	
	Where 'ARR[i]' denotes the array element at 'ith' index.
	
	Time Limit: 1 sec
	Sample Input 1 :
	3
	3 2 1
	Sample Output 1 :
	3
	Explanation of Sample Output 1:
	We have a total of 3 pairs which satisfy the condition of inversion. (3, 2), (2, 1) and (3, 1).
	Sample Input 2 :
	5
	2 5 1 3 4
	Sample Output 2 :
	4
	Explanation of Sample Output 1:
	We have a total of 4 pairs which satisfy the condition of inversion. (2, 1), (5, 1), (5, 3) and (5, 4).
	*/
long long merge(long long *arr,int start1,int end1,int start2,int end2)
{
    long long count=0;
    int index1=start1,index2=start2;
    long long temp[end2-start1+1];
    int k=0;
    
    while(index1<=end1 && index2<=end2)
    {
        if(arr[index1]>arr[index2])
        {
            count+=end1-index1+1;
            temp[k++]=arr[index2++];
        }
        else
        {
            temp[k++]=arr[index1++];
        }
    }
    while(index1<=end1)
    {
        temp[k++]=arr[index1++];
    }
    while(index2<=end2)
    {
        temp[k++]=arr[index2++];
    }
    for(int i=start1,k=0;i<=end2;i++,k++)
    {
        arr[i]=temp[k];
    }
    //cout<<count<<endl;
    return count;
}
long long inversion(long long *arr,int start,int end){
    if(start>=end)
        return 0;
    else
    {
        int mid=(start+end)/2;
        long long right=inversion(arr,start,mid);
        long long left=inversion(arr,mid+1,end);
        long long count=merge(arr,start,mid,mid+1,end);
        
    
        return right+left+count;
    }
        
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return inversion(arr,0,n-1);
}
