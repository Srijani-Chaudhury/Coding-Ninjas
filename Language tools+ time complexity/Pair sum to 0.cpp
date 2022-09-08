#include<unordered_map>
int pairSum(int *arr, int n) {
	// Write your code here
    int count=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(-arr[i])!=m.end()){
            count=count+m[-arr[i]];
            
        }
        if(m.find(arr[i])==m.end()){
            m.insert(make_pair(arr[i],1));
        }
        else
        {
            m[arr[i]]++;
        }
    }
    return count;
}

