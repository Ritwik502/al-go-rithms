#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int ans=0,curr=0;
        while(N>0){
            if((N&1)==1)curr++;
            else curr=0;
            ans=max(ans,curr);
            N>>=1;
        }
        return ans;
        
    }
};


int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends
