class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long len = nums.size();
        long prefix = 0;
        long postfix = 0;
        long sum1 = 0;
        long sum2 = 0;
        long count = 0;

        for(long i = 0; i < len; i++)
            postfix += nums[i];
        for(long i = 0; i < len - 1 ; i++)
        {
            sum1 = prefix + nums[i];
            sum2 = postfix - sum1;
            prefix = sum1;
            if(sum1 >= sum2)
                count++;
        }
        return (count);
    }
};
