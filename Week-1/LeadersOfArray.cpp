// Leader element: one who is greater than all the elements present to the right. Last element always a leader. 
//unoptimized approach:
class Solution{

    public:
    vector<int> leaders(int a[], int n){
        // Code here
        /*vector<int> lead;
        int small;
        for(int i=0;i<n;i++)
        {
            small=0;
            for(int j=i+1;j<n;j++)
            {
                
                if(a[i]<a[j])
                {
                    small++;
                    break;
                }
            }
            if(!small)
            {
                lead.push_back(a[i]);
            }
        }
        //lead.push_back(a[n-1]);
        return lead;
        
        
    }
}; */

 vector<int> lead;
        int last=a[n-1];
        lead.push_back(last);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=last)
            {
                lead.push_back(a[i]);
                last=a[i];
            }    
        }
        reverse(lead.begin(),lead.end());
        return lead;
    }
};
