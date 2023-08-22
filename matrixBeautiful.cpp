class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here
        int maxSum = 0;
        for(int i=0; i<n; i++)
        {
            int sum1 = 0, sum2 = 0;
            for(int j=0; j<n; j++)
            {
                sum1 += matrix[i][j];
                sum2 += matrix[j][i];
                maxSum = max(maxSum, sum1);
                maxSum = max(maxSum, sum2);

            }
        }
        int count = 0;
        for(int i=0; i<n; i++)
        {
            int sum = 0;
            for(int j=0; j<n; j++)
            {
                sum += matrix[i][j];
            }
            count = count + (maxSum - sum);
        }
        return count;
    } 
};
