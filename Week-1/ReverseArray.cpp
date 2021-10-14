#include <iostream>
using namespace std;

int main() {
	int t,n,j=0;
	int arr[100];
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    for( j=0;j<n;j++)
	     cin>>arr[j];
	    for( j=0;j<n;j++)
	      cout<<arr[n-j-1]<<" ";
	    cout<<endl; 
	}
	return 0;
}
