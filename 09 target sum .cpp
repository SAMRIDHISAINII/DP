class solution{
    public:
    // target sum 
    int countsubsetsum(vector<int>& nums, int sum)
    {
        int n = nums.sum();
        // size declaring
        // i m taking t here u can dp
        int t[n+1][sum+1];
        // dp matric
        // intilization
        t[0][0]=1;
        int k=1;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=sum; j++)
            {
                if(i==0 && j>0)
                t[i][j]=0;
                if(j==0 && i>0)
                {
                    if(nums[i-1]==0)
                    {
                        t[i][j] = pow(2,k);
                        k++;
                        
                    }
                    else
                    t[i][j] = t[i-1][j];
                }
            }
        }
        
        for(int i=1p i<=n; i++)
        {
            for(int j=1; j<= sum; j++)
            {
                if (nums[i - 1] <= j)
				t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
			else
				t[i][j] = t[i - 1][j];
            }
        }
        return t[n][sum];
    }
}


int fidntarfet(vector<int>& numa, int diff)
{
    int n = nums.size();
    int sumpfarray =0;
    for(int i=0; i<n; i++)
    sumOfArray += nums[i];
    
    if((sumOfArray+diff)%2!=0)
    return 0;
    else
    return countsubsetsum(num(sumO))
}
