void rotate(int *input, int d, int n)
{
    //Write your code here
    int arr[d];
    for(int i=0;i<d;i++){
      arr[i]=input[i];
    }
    int count=0;
    while(count<n-d){
        input[count]=input[count+d];
        count++;
    }
    int s=0;
    while(count <n){
        input[count]=arr[s];
        count++;
        s++;
    }
}
