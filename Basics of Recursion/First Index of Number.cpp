int helper(int *input,int size,int index,int x)
{
    if(index==size)
        return -1;
    if(input[index]==x)
        return index;
    return(helper(input,size,index+1,x));
}
int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  return(helper(input,size,0,x));

}

