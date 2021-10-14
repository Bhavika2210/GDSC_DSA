// Use of Unordered Map
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map <int,int>MP;
  
  for(int i=0;i<n;i++)
  {
      MP[arr[i]]++;
  }
  for(int i=0;i<n;i++)
  {
      if(MP[arr[i]]>1)
      return i+1;
  }
  return -1;
    }
};
