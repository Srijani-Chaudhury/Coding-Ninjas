int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
   
   if(n==0){
       return 0;
   }
   int smalloutput=sum(input,n-1);
   int output=input[n-1]+smalloutput;
   return output;


}

