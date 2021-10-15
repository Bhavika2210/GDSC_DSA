class Solution{
    public:
    
    int immediateSmaller(int arr[], int n, int x)
    {
        /*int i=0;
          int min=x-arr[0];
          int diff=0;
        for(i=0;i<n;i++)
        {
            diff=x-arr[i];
            if(diff<=min && diff>0)
            {
                min=diff;
            }
        }
        if(min>0)
          return (x-min);
        else
          return -1; 
          */
      
      
          int result =-1;
          for(int i=0;i<n;i++)
          {
              if(arr[i]<x)
              result= max(result,arr[i]);
          }
          return result;
    
        
    }
};
