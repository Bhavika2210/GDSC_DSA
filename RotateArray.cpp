void rotateArr(int arr[], int d, int n){
        // code here
        int mod=d%n; // helps to deal with rotational unit greater than the array size
      
 int A[n];
     for(int i=0;i<n;i++)
         A[i]=arr[(mod+i)%n];
         
         for(int i=0;i<n;i++)
         {
             arr[i]=A[i];
         }
     
    }
    
};
