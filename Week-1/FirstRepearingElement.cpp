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
//https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=2&query=category[]Arraysdifficulty[]0page2category[]Arrays
