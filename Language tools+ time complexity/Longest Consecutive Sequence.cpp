#include<unordered_map>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    // Your Code goes here
    int endIndex=0;
    int startIndex=0;
    int maxDifference=0;
    unordered_map<int,bool>m;
    for(int i=0;i<n;i++){
        if(m.find(arr[i])==m.end()){
            m.insert(make_pair(arr[i],true));
        }
    }
    for(int i=0;i<n;i++){
        int num=arr[i]+1;
        while(m.find(num)!=m.end() && m[num]==true){
            m[num]=false;
            num++;
        }
        
        int mun=arr[i]-1;
        while(m.find(mun)!=m.end() && m[mun]==true){
            m[mun]=false;
            mun--;
        }
        if((num-mun)>=maxDifference)
        {
            maxDifference=num-mun;
            endIndex=num;
            startIndex=mun;
        }
    }
    vector<int> v;
    v.push_back(startIndex+1);
    if(maxDifference>1)
       v.push_back(endIndex-1);
    return v;
}
