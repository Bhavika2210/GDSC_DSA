// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#
//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
void sort012(int a[], int n)
{
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
          zero++;
        else if(a[i]==1)
        one++;
        else 
        two++;
    }
    for(int i=0;i<zero;i++)
    {
        a[i]=0;
    }
    for(int i=zero;i<one+zero;i++)
    {
        a[i]=1;
    }
    for(int i=one+zero;i<n;i++)
    {
        a[i]=2;
    }
}
